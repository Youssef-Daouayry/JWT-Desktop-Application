#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QPushButton>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_HomeBtn_clicked();

    void on_TokenBtn_clicked();

    void on_VerificationBtn_clicked();

    void on_AlgorithmsBtn_clicked();

    void toggleWidgetVisibility();

    void on_HS256Btn_clicked();

    void on_HS384Btn_clicked();

    void on_HS512Btn_clicked();

    void on_CloseMenuBtn_clicked();

    void on_encodeBtn_clicked();

    void on_verificationBtn_clicked();


private:
    QString selectedAlgorithm;
    QString base64UrlEncode(QTextEdit *textEdit);
    QString encodeJWT(const QString &header, const QString &payload ,const QString &privateKey);
    bool isValidJson(const QString &text);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
