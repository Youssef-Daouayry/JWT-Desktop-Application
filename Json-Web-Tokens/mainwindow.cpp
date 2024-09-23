#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <openssl/hmac.h>
#include <openssl/err.h>
#include <QByteArray>
#include <QString>
#include <QTextEdit>
#include <QFile>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QMessageBox>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("JSON Web Tokens");
    ui->widget_3->setVisible(false);
    on_HomeBtn_clicked();
    on_HS256Btn_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::toggleWidgetVisibility(){}
void MainWindow::on_HomeBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->label_2->setText("HOME");
}
void MainWindow::on_TokenBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(1); // Display page (index 0)
    ui->label_2->setText("GENERATE JWT");
}
void MainWindow::on_VerificationBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(2); // Display page (index 0)
    ui->label_2->setText("VERIFY");

}
void MainWindow::on_AlgorithmsBtn_clicked()
{
    ui->widget_3->setVisible(!ui->widget_3->isVisible());
}
void MainWindow::on_CloseMenuBtn_clicked()
{
    ui->widget_3->setVisible(false);
}
void MainWindow::on_HS256Btn_clicked()
{

    ui->label_14->setText("HS256");
    ui->label_12->setText("HS256");
    ui->label_16->setText("HMACSHA256(\n  base64UrlEncode(header) + \".\" +\n  base64UrlEncode(payload),");
    selectedAlgorithm = "HS256";
    ui->headerEdit->setText("{\n  \"alg\": \"HS256\",\n  \"typ\": \"JWT\"\n}");
    ui->payloadEdit->setText("{\n  \"sub\": \"1234567890\",\n  \"name\": \"John Doe\",\n  \"iat\": 1516239022\n}");




}
void MainWindow::on_HS384Btn_clicked()
{
    ui->label_14->setText("HS384");
    ui->label_12->setText("HS384");
    ui->label_16->setText("HMACSHA384(\n  base64UrlEncode(header) + \".\" +\n  base64UrlEncode(payload),");

    selectedAlgorithm = "HS384";
    ui->headerEdit->setText("{\n  \"alg\": \"HS384\",\n  \"typ\": \"JWT\"\n}");
    ui->payloadEdit->setText("{\n  \"sub\": \"1234567890\",\n  \"name\": \"John Doe\",\n  \"iat\": 1516239022\n}");
}


void MainWindow::on_HS512Btn_clicked()
{

    ui->label_14->setText("HS512");
    ui->label_12->setText("HS512");
    ui->label_16->setText("HMACSHA512(\n  base64UrlEncode(header) + \".\" +\n  base64UrlEncode(payload),");
    selectedAlgorithm = "HS512";
    ui->headerEdit->setText("{\n  \"alg\": \"HS512\",\n  \"typ\": \"JWT\"\n}");
    ui->payloadEdit->setText("{\n  \"sub\": \"1234567890\",\n  \"name\": \"John Doe\",\n  \"iat\": 1516239022\n}");

}
void MainWindow::on_encodeBtn_clicked() {
    QString encodedHeader = base64UrlEncode(ui->headerEdit);
    QString encodedPayload = base64UrlEncode(ui->payloadEdit);
    if (encodedHeader.isEmpty() || encodedPayload.isEmpty()) {
        // Display an error message indicating invalid JSON format or take appropriate action
        return; // Stop further execution
    }
    QString privatekey = ui->privatekeyEdit->toPlainText();

    // Call the encodeJWT function to generate the JWT token
    QString jwtToken = encodeJWT(encodedHeader, encodedPayload, privatekey);

    // Display the resulting JWT token in the tokenEdit QTextEdit
    ui->tokenEdit->setText(jwtToken);
}

bool MainWindow::isValidJson(const QString &text) {
    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson(text.toUtf8(), &error);
    return !doc.isNull() && error.error == QJsonParseError::NoError;
}


QString MainWindow::base64UrlEncode(QTextEdit *textEdit) {
    QString input = textEdit->toPlainText();

    // Check if the input is a valid JSON format
    bool isValid = isValidJson(input);

    if (!isValid) {
        // If the input is not in the expected JSON format
        // Show an error message or notification
        QMessageBox::critical(nullptr, "Error", "Invalid JSON format!"); // Show a message box

        return QString(); // Or return an error indicator
    }
    // Remove specific characters:newline, carriage return, and tab
    input.remove('\n').remove('\r').remove('\t');
    bool withinQuotes = false;

    for (int i = 0; i < input.length(); ++i) {
        if (input.at(i) == '"') {
            withinQuotes = !withinQuotes;
        } else if (!withinQuotes && input.at(i).isSpace()) {
            input.remove(i, 1);
            i--; // Adjust the index after removal
        }
    }

    // Convert QString to UTF-8 encoded QByteArray
    QByteArray byteArray = input.toUtf8();

    // Encode the byte array using Base64
    QByteArray base64Encoded = byteArray.toBase64();

    // Apply modifications for URL safety (Base64URL)
    QString base64UrlEncoded = QString(base64Encoded)
                                   .replace('+', '-')
                                   .replace('/', '_')
                                   .remove('=');

    return base64UrlEncoded;
}
QString MainWindow::encodeJWT(const QString &encodedHeader, const QString &encodedPayload, const QString &privateKey) {
    if (selectedAlgorithm == "HS256") {
        QString encodedToken = encodedHeader + "." + encodedPayload;

        QByteArray key = privateKey.toUtf8();

        // Create HMAC signature using OpenSSL's HMAC function
        unsigned char *hashedSignature = HMAC(
            EVP_sha256(),
            reinterpret_cast<const unsigned char *>(key.constData()),
            key.length(),
            reinterpret_cast<const unsigned char *>(encodedToken.toUtf8().constData()),
            encodedToken.toUtf8().length(),
            NULL,
            NULL
            );
        // Convert the hashed signature to a QString in Base64 format
        QString base64Signature = QByteArray(reinterpret_cast<char*>(hashedSignature), EVP_MD_size(EVP_sha256()))
                                      .toBase64()
                                      .replace("+", "-")
                                      .replace("/", "_")
                                      .replace("=", "");
        QString CencodedHeader = "<font color='red'>" + encodedHeader + "</font>";
        QString CencodedPayload = "<font color='purple'>" + encodedPayload + "</font>";
        QString CencodedToken = CencodedHeader + "." + CencodedPayload;
        QString Cbase64Signature = "<font color='blue'>" + base64Signature + "</font>";
        return CencodedToken + "." + Cbase64Signature;
    }
    else if (selectedAlgorithm == "HS384") {
        QString encodedToken = encodedHeader + "." + encodedPayload;

        QByteArray key = privateKey.toUtf8();


        // Create HMAC signature using SHA-384
        unsigned char *hashedSignature = HMAC(
            EVP_sha384(),
            reinterpret_cast<const unsigned char *>(key.constData()),
            key.length(),
            reinterpret_cast<const unsigned char *>(encodedToken.toUtf8().constData()),
            encodedToken.toUtf8().length(),
            NULL,
            NULL
            );
        QString base64Signature = QByteArray(reinterpret_cast<char*>(hashedSignature), EVP_MD_size(EVP_sha384()))
                                      .toBase64()
                                      .replace("+", "-")
                                      .replace("/", "_")
                                      .replace("=", "");

        QString CencodedHeader = "<font color='red'>" + encodedHeader + "</font>";
        QString CencodedPayload = "<font color='purple'>" + encodedPayload + "</font>";
        QString CencodedToken = CencodedHeader + "." + CencodedPayload;
        QString Cbase64Signature = "<font color='blue'>" + base64Signature + "</font>";
        return CencodedToken + "." + Cbase64Signature;
    }

    else if (selectedAlgorithm == "HS512") {
        QString encodedToken = encodedHeader + "." + encodedPayload;

        QByteArray key = privateKey.toUtf8();


        // Create HMAC signature using SHA-512
        unsigned char *hashedSignature = HMAC(
            EVP_sha512(),
            reinterpret_cast<const unsigned char *>(key.constData()),
            key.length(),
            reinterpret_cast<const unsigned char *>(encodedToken.toUtf8().constData()),
            encodedToken.toUtf8().length(),
            NULL,
            NULL
            );
        QString base64Signature = QByteArray(reinterpret_cast<char*>(hashedSignature), EVP_MD_size(EVP_sha512())).toBase64().replace("+", "-").replace("/", "_").replace("=", "");

        QString CencodedHeader = "<font color='red'>" + encodedHeader + "</font>";
        QString CencodedPayload = "<font color='purple'>" + encodedPayload + "</font>";
        QString CencodedToken = CencodedHeader + "." + CencodedPayload;
        QString Cbase64Signature = "<font color='blue'>" + base64Signature + "</font>";
        return CencodedToken + "." + Cbase64Signature;
    }


}

void MainWindow::on_verificationBtn_clicked()
{
    QString token = ui->VtokenEdit->toPlainText();
    QString text = ui->VkeyEdit->toPlainText();

    // Split the token into its parts (header, payload, signature)
    QStringList parts = token.split('.');
    if (parts.size() != 3) {
        // Invalid token format
        ui->verificationLabel->setText("Token Invalid");
        ui->verificationLabel->setStyleSheet("color: red;");
        return;
    }

    QString encodedHeader = parts[0];
    QString encodedPayload = parts[1];
    QString providedSignature = parts[2];

    // Concatenate the header and payload
    QString encodedToken = encodedHeader + "." + encodedPayload;

    if (selectedAlgorithm == "HS256") {
        QByteArray key = text.toUtf8();
        // Calculate the signature using HMAC with SHA-256
        unsigned char *hashedSignature = HMAC(
            EVP_sha256(),
            reinterpret_cast<const unsigned char *>(key.constData()),
            key.length(),
            reinterpret_cast<const unsigned char *>(encodedToken.toUtf8().constData()),
            encodedToken.toUtf8().length(),
            NULL,
            NULL
            );
        QString calculatedSignature = QByteArray(reinterpret_cast<char*>(hashedSignature), EVP_MD_size(EVP_sha256()))
                                          .toBase64()
                                          .replace("+", "-")
                                          .replace("/", "_")
                                          .replace("=", "");
        // Extract token contents and display in extractLabel
        QByteArray decodedHeader = QByteArray::fromBase64(encodedHeader.toUtf8());
        QByteArray decodedPayload = QByteArray::fromBase64(encodedPayload.toUtf8());

        QJsonDocument headerJson = QJsonDocument::fromJson(decodedHeader);
        QJsonDocument payloadJson = QJsonDocument::fromJson(decodedPayload);

        QString formattedHeader = headerJson.toJson(QJsonDocument::Indented);
        QString formattedPayload = payloadJson.toJson(QJsonDocument::Indented);

        ui->extractEdit->setText(formattedHeader + "\n" + formattedPayload);

        if (calculatedSignature == providedSignature) {
            ui->verificationLabel->setText("Signature Verified");
            ui->verificationLabel->setStyleSheet("color: green;");

        } else {
            ui->verificationLabel->setText("Invalid Signature");
            ui->verificationLabel->setStyleSheet("color: red;");
        }
    }
    else if (selectedAlgorithm == "HS384") {
        QByteArray key = text.toUtf8();
        // Calculate the signature using HMAC with SHA-384
        unsigned char *hashedSignature = HMAC(
            EVP_sha384(),
            reinterpret_cast<const unsigned char *>(key.constData()),
            key.length(),
            reinterpret_cast<const unsigned char *>(encodedToken.toUtf8().constData()),
            encodedToken.toUtf8().length(),
            NULL,
            NULL
            );
        QString calculatedSignature = QByteArray(reinterpret_cast<char*>(hashedSignature), EVP_MD_size(EVP_sha384()))
                                          .toBase64()
                                          .replace("+", "-")
                                          .replace("/", "_")
                                          .replace("=", "");
        // Extract token contents and display in extractLabel
        QByteArray decodedHeader = QByteArray::fromBase64(encodedHeader.toUtf8());
        QByteArray decodedPayload = QByteArray::fromBase64(encodedPayload.toUtf8());

        QJsonDocument headerJson = QJsonDocument::fromJson(decodedHeader);
        QJsonDocument payloadJson = QJsonDocument::fromJson(decodedPayload);

        QString formattedHeader = headerJson.toJson(QJsonDocument::Indented);
        QString formattedPayload = payloadJson.toJson(QJsonDocument::Indented);

        ui->extractEdit->setText(formattedHeader + "\n" + formattedPayload);

        if (calculatedSignature == providedSignature) {
            ui->verificationLabel->setText("Signature Verified");
            ui->verificationLabel->setStyleSheet("color: green;");

        } else {
            ui->verificationLabel->setText("Invalid Signature");
            ui->verificationLabel->setStyleSheet("color: red;");
        }
    }
    else if (selectedAlgorithm == "HS512") {
        QByteArray key = text.toUtf8();
        // Calculate the signature using HMAC with SHA-512
        unsigned char *hashedSignature = HMAC(
            EVP_sha512(),
            reinterpret_cast<const unsigned char *>(key.constData()),
            key.length(),
            reinterpret_cast<const unsigned char *>(encodedToken.toUtf8().constData()),
            encodedToken.toUtf8().length(),
            NULL,
            NULL
            );
        QString calculatedSignature = QByteArray(reinterpret_cast<char*>(hashedSignature), EVP_MD_size(EVP_sha512()))
                                          .toBase64()
                                          .replace("+", "-")
                                          .replace("/", "_")
                                          .replace("=", "");
        // Extract token contents and display in extractLabel
        QByteArray decodedHeader = QByteArray::fromBase64(encodedHeader.toUtf8());
        QByteArray decodedPayload = QByteArray::fromBase64(encodedPayload.toUtf8());

        QJsonDocument headerJson = QJsonDocument::fromJson(decodedHeader);
        QJsonDocument payloadJson = QJsonDocument::fromJson(decodedPayload);

        QString formattedHeader = headerJson.toJson(QJsonDocument::Indented);
        QString formattedPayload = payloadJson.toJson(QJsonDocument::Indented);

        ui->extractEdit->setText(formattedHeader + "\n" + formattedPayload);

        if (calculatedSignature == providedSignature) {
            ui->verificationLabel->setText("Signature Verified");
            ui->verificationLabel->setStyleSheet("color: green;");

        } else {
            ui->verificationLabel->setText("Invalid Signature");
            ui->verificationLabel->setStyleSheet("color: red;");
        }
    }
}



