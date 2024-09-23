/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *leftMenu;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer_8;
    QPushButton *HomeBtn;
    QPushButton *TokenBtn;
    QPushButton *VerificationBtn;
    QPushButton *AlgorithmsBtn;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *CloseMenuBtn;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_7;
    QPushButton *HS256Btn;
    QPushButton *HS384Btn;
    QPushButton *HS512Btn;
    QSpacerItem *verticalSpacer_2;
    QWidget *mainMenu;
    QVBoxLayout *verticalLayout;
    QWidget *headerWidget;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_2;
    QWidget *bodyWidget;
    QVBoxLayout *verticalLayout_10;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_3;
    QLabel *label_18;
    QLabel *label_4;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_6;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_14;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_9;
    QTextEdit *tokenEdit;
    QSpacerItem *verticalSpacer_4;
    QPushButton *encodeBtn;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QLabel *label_14;
    QLabel *label_6;
    QTextEdit *headerEdit;
    QLabel *label_7;
    QTextEdit *payloadEdit;
    QLabel *label_8;
    QLabel *label_16;
    QTextEdit *privatekeyEdit;
    QLabel *label_17;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_5;
    QTextEdit *VtokenEdit;
    QLabel *label_10;
    QTextEdit *VkeyEdit;
    QPushButton *verificationBtn;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_16;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_11;
    QTextEdit *extractEdit;
    QSpacerItem *verticalSpacer_6;
    QLabel *verificationLabel;
    QSpacerItem *verticalSpacer_7;
    QWidget *widget_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1437, 741);
        MainWindow->setStyleSheet(QString::fromUtf8("*{\n"
"border:none;\n"
"	background-color: transparent;\n"
"	background:none;\n"
"	padding:0;\n"
"	margine:0;\n"
"	color:#fff;\n"
"}\n"
"\n"
"#centralwidget{\n"
"	background-color: rgb(27, 27, 27);\n"
"}\n"
"#leftMenu{\n"
" background-color:#5C5792;\n"
"}\n"
"#mainMenu{\n"
"	background-color: #f0f0f0;\n"
"}\n"
"QPushButton{\n"
"text-align:left;\n"
"padding:7px 15px;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftMenu = new QWidget(centralwidget);
        leftMenu->setObjectName("leftMenu");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftMenu->sizePolicy().hasHeightForWidth());
        leftMenu->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(leftMenu);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(leftMenu);
        widget->setObjectName("widget");
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(widget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout_3->addWidget(frame, 0, Qt::AlignmentFlag::AlignTop);

        frame_2 = new QFrame(widget);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #5C5188;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"\n"
"background-color: rgb(170, 0, 255);\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setSpacing(20);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(5, 10, 5, 10);
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_8);

        HomeBtn = new QPushButton(frame_2);
        HomeBtn->setObjectName("HomeBtn");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(HomeBtn->sizePolicy().hasHeightForWidth());
        HomeBtn->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        HomeBtn->setFont(font);
        HomeBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/icons/home.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        HomeBtn->setIcon(icon);
        HomeBtn->setIconSize(QSize(32, 32));

        verticalLayout_5->addWidget(HomeBtn);

        TokenBtn = new QPushButton(frame_2);
        TokenBtn->setObjectName("TokenBtn");
        TokenBtn->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/icons/lock.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        TokenBtn->setIcon(icon1);
        TokenBtn->setIconSize(QSize(32, 32));

        verticalLayout_5->addWidget(TokenBtn);

        VerificationBtn = new QPushButton(frame_2);
        VerificationBtn->setObjectName("VerificationBtn");
        VerificationBtn->setFont(font);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/icons/check-square.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        VerificationBtn->setIcon(icon2);
        VerificationBtn->setIconSize(QSize(32, 32));

        verticalLayout_5->addWidget(VerificationBtn);

        AlgorithmsBtn = new QPushButton(frame_2);
        AlgorithmsBtn->setObjectName("AlgorithmsBtn");
        AlgorithmsBtn->setFont(font);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/icons/code.svg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AlgorithmsBtn->setIcon(icon3);
        AlgorithmsBtn->setIconSize(QSize(32, 32));

        verticalLayout_5->addWidget(AlgorithmsBtn);


        verticalLayout_3->addWidget(frame_2, 0, Qt::AlignmentFlag::AlignTop);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_2->addWidget(widget, 0, Qt::AlignmentFlag::AlignLeft);


        horizontalLayout->addWidget(leftMenu, 0, Qt::AlignmentFlag::AlignLeft);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        verticalLayout_6 = new QVBoxLayout(widget_3);
        verticalLayout_6->setSpacing(7);
        verticalLayout_6->setObjectName("verticalLayout_6");
        frame_3 = new QFrame(widget_3);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        CloseMenuBtn = new QPushButton(frame_3);
        CloseMenuBtn->setObjectName("CloseMenuBtn");
        CloseMenuBtn->setStyleSheet(QString::fromUtf8(""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/icons/x.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CloseMenuBtn->setIcon(icon4);
        CloseMenuBtn->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(CloseMenuBtn, 0, Qt::AlignmentFlag::AlignHCenter);


        verticalLayout_6->addWidget(frame_3, 0, Qt::AlignmentFlag::AlignTop);

        frame_4 = new QFrame(widget_3);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("QPushButton:pressed{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_4);
        verticalLayout_7->setObjectName("verticalLayout_7");
        HS256Btn = new QPushButton(frame_4);
        HS256Btn->setObjectName("HS256Btn");
        HS256Btn->setFont(font);
        HS256Btn->setStyleSheet(QString::fromUtf8("gridline-color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(HS256Btn);

        HS384Btn = new QPushButton(frame_4);
        HS384Btn->setObjectName("HS384Btn");
        HS384Btn->setFont(font);

        verticalLayout_7->addWidget(HS384Btn);

        HS512Btn = new QPushButton(frame_4);
        HS512Btn->setObjectName("HS512Btn");
        HS512Btn->setFont(font);
        HS512Btn->setStyleSheet(QString::fromUtf8("border-color: rgb(255, 255, 255);"));

        verticalLayout_7->addWidget(HS512Btn);


        verticalLayout_6->addWidget(frame_4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        verticalLayout_4->addWidget(widget_3);


        horizontalLayout->addWidget(widget_2);

        mainMenu = new QWidget(centralwidget);
        mainMenu->setObjectName("mainMenu");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(mainMenu->sizePolicy().hasHeightForWidth());
        mainMenu->setSizePolicy(sizePolicy2);
        mainMenu->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(mainMenu);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        headerWidget = new QWidget(mainMenu);
        headerWidget->setObjectName("headerWidget");
        headerWidget->setStyleSheet(QString::fromUtf8("background-color:#211A44;"));
        horizontalLayout_5 = new QHBoxLayout(headerWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 10, 0, 10);
        frame_7 = new QFrame(headerWidget);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_7);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_7);
        label->setObjectName("label");
        label->setMaximumSize(QSize(250, 80));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/JWT.png")));
        label->setScaledContents(true);

        verticalLayout_8->addWidget(label);


        horizontalLayout_5->addWidget(frame_7, 0, Qt::AlignmentFlag::AlignLeft);

        frame_6 = new QFrame(headerWidget);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_6);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_6);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic UI Semilight")});
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setStrikeOut(false);
        label_2->setFont(font1);

        verticalLayout_9->addWidget(label_2, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);


        horizontalLayout_5->addWidget(frame_6);


        verticalLayout->addWidget(headerWidget, 0, Qt::AlignmentFlag::AlignTop);

        bodyWidget = new QWidget(mainMenu);
        bodyWidget->setObjectName("bodyWidget");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bodyWidget->sizePolicy().hasHeightForWidth());
        bodyWidget->setSizePolicy(sizePolicy3);
        bodyWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayout_10 = new QVBoxLayout(bodyWidget);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(bodyWidget);
        stackedWidget->setObjectName("stackedWidget");
        QFont font2;
        font2.setPointSize(15);
        stackedWidget->setFont(font2);
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(31, 31, 31);"));
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_11 = new QVBoxLayout(page);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        frame_10 = new QFrame(page);
        frame_10->setObjectName("frame_10");
        frame_10->setStyleSheet(QString::fromUtf8(""));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_10);
        verticalLayout_12->setObjectName("verticalLayout_12");
        label_3 = new QLabel(frame_10);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(500, 0));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/JWT_Logo.png")));
        label_3->setScaledContents(true);
        label_3->setMargin(-20);

        verticalLayout_12->addWidget(label_3, 0, Qt::AlignmentFlag::AlignHCenter);

        label_18 = new QLabel(frame_10);
        label_18->setObjectName("label_18");
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label_18->setFont(font3);

        verticalLayout_12->addWidget(label_18, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignVCenter);

        label_4 = new QLabel(frame_10);
        label_4->setObjectName("label_4");
        QFont font4;
        font4.setPointSize(20);
        font4.setBold(true);
        font4.setItalic(true);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_12->addWidget(label_4, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);


        verticalLayout_11->addWidget(frame_10);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background-color: rgb(243, 243, 243);\n"
"\n"
"}\n"
"QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
""));
        horizontalLayout_6 = new QHBoxLayout(page_2);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(15, 15, 15, 15);
        frame_9 = new QFrame(page_2);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_9);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(-1, -1, -1, 10);
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_14->addItem(verticalSpacer_5);

        label_9 = new QLabel(frame_9);
        label_9->setObjectName("label_9");
        QFont font5;
        font5.setPointSize(10);
        font5.setBold(true);
        label_9->setFont(font5);
        label_9->setMargin(16);

        verticalLayout_14->addWidget(label_9, 0, Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        tokenEdit = new QTextEdit(frame_9);
        tokenEdit->setObjectName("tokenEdit");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(tokenEdit->sizePolicy().hasHeightForWidth());
        tokenEdit->setSizePolicy(sizePolicy4);
        tokenEdit->setMaximumSize(QSize(16777215, 16777215));
        QFont font6;
        font6.setPointSize(15);
        font6.setBold(true);
        tokenEdit->setFont(font6);
        tokenEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        tokenEdit->setReadOnly(true);

        verticalLayout_14->addWidget(tokenEdit);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_14->addItem(verticalSpacer_4);

        encodeBtn = new QPushButton(frame_9);
        encodeBtn->setObjectName("encodeBtn");
        QFont font7;
        font7.setPointSize(12);
        font7.setBold(true);
        encodeBtn->setFont(font7);
        encodeBtn->setStyleSheet(QString::fromUtf8("background-color: #5C5188;\n"
""));

        verticalLayout_14->addWidget(encodeBtn, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_14->addItem(verticalSpacer_3);


        horizontalLayout_6->addWidget(frame_9);

        frame_8 = new QFrame(page_2);
        frame_8->setObjectName("frame_8");
        frame_8->setStyleSheet(QString::fromUtf8(""));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_8);
        verticalLayout_13->setObjectName("verticalLayout_13");
        frame_13 = new QFrame(frame_8);
        frame_13->setObjectName("frame_13");
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_13);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_15 = new QLabel(frame_13);
        label_15->setObjectName("label_15");
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Cambria")});
        font8.setPointSize(15);
        font8.setBold(true);
        label_15->setFont(font8);

        horizontalLayout_8->addWidget(label_15, 0, Qt::AlignmentFlag::AlignRight);

        label_14 = new QLabel(frame_13);
        label_14->setObjectName("label_14");
        label_14->setFont(font8);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));

        horizontalLayout_8->addWidget(label_14, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout_13->addWidget(frame_13);

        label_6 = new QLabel(frame_8);
        label_6->setObjectName("label_6");
        label_6->setFont(font5);
        label_6->setMargin(10);

        verticalLayout_13->addWidget(label_6, 0, Qt::AlignmentFlag::AlignHCenter);

        headerEdit = new QTextEdit(frame_8);
        headerEdit->setObjectName("headerEdit");
        headerEdit->setFont(font6);
        headerEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        headerEdit->setReadOnly(false);

        verticalLayout_13->addWidget(headerEdit);

        label_7 = new QLabel(frame_8);
        label_7->setObjectName("label_7");
        label_7->setFont(font5);
        label_7->setMargin(10);

        verticalLayout_13->addWidget(label_7, 0, Qt::AlignmentFlag::AlignHCenter);

        payloadEdit = new QTextEdit(frame_8);
        payloadEdit->setObjectName("payloadEdit");
        payloadEdit->setFont(font6);
        payloadEdit->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 255);"));

        verticalLayout_13->addWidget(payloadEdit);

        label_8 = new QLabel(frame_8);
        label_8->setObjectName("label_8");
        label_8->setFont(font5);
        label_8->setMargin(10);

        verticalLayout_13->addWidget(label_8, 0, Qt::AlignmentFlag::AlignHCenter);

        label_16 = new QLabel(frame_8);
        label_16->setObjectName("label_16");
        QFont font9;
        font9.setPointSize(11);
        font9.setBold(true);
        label_16->setFont(font9);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(3, 116, 255);"));

        verticalLayout_13->addWidget(label_16);

        privatekeyEdit = new QTextEdit(frame_8);
        privatekeyEdit->setObjectName("privatekeyEdit");
        sizePolicy4.setHeightForWidth(privatekeyEdit->sizePolicy().hasHeightForWidth());
        privatekeyEdit->setSizePolicy(sizePolicy4);
        privatekeyEdit->setMaximumSize(QSize(16777215, 16777215));
        privatekeyEdit->setFont(font6);
        privatekeyEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        verticalLayout_13->addWidget(privatekeyEdit, 0, Qt::AlignmentFlag::AlignVCenter);

        label_17 = new QLabel(frame_8);
        label_17->setObjectName("label_17");
        label_17->setFont(font9);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(3, 116, 255);"));

        verticalLayout_13->addWidget(label_17);


        horizontalLayout_6->addWidget(frame_8);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"background-color: rgb(243, 243, 243);\n"
"	color: rgb(0, 0, 0);\n"
"\n"
"}\n"
"QLabel{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(page_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        frame_5 = new QFrame(page_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_15 = new QVBoxLayout(frame_5);
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_5 = new QLabel(frame_5);
        label_5->setObjectName("label_5");
        label_5->setFont(font5);
        label_5->setMargin(17);

        verticalLayout_15->addWidget(label_5, 0, Qt::AlignmentFlag::AlignHCenter);

        VtokenEdit = new QTextEdit(frame_5);
        VtokenEdit->setObjectName("VtokenEdit");
        VtokenEdit->setFont(font6);

        verticalLayout_15->addWidget(VtokenEdit);

        label_10 = new QLabel(frame_5);
        label_10->setObjectName("label_10");
        label_10->setFont(font5);
        label_10->setMargin(15);

        verticalLayout_15->addWidget(label_10, 0, Qt::AlignmentFlag::AlignHCenter);

        VkeyEdit = new QTextEdit(frame_5);
        VkeyEdit->setObjectName("VkeyEdit");
        VkeyEdit->setFont(font6);
        VkeyEdit->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);"));

        verticalLayout_15->addWidget(VkeyEdit, 0, Qt::AlignmentFlag::AlignVCenter);

        verificationBtn = new QPushButton(frame_5);
        verificationBtn->setObjectName("verificationBtn");
        verificationBtn->setFont(font7);
        verificationBtn->setStyleSheet(QString::fromUtf8("background-color: #5C5188;\n"
""));

        verticalLayout_15->addWidget(verificationBtn, 0, Qt::AlignmentFlag::AlignHCenter);


        horizontalLayout_4->addWidget(frame_5);

        frame_11 = new QFrame(page_3);
        frame_11->setObjectName("frame_11");
        frame_11->setFont(font);
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_16 = new QVBoxLayout(frame_11);
        verticalLayout_16->setObjectName("verticalLayout_16");
        frame_12 = new QFrame(frame_11);
        frame_12->setObjectName("frame_12");
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_12);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(-1, -1, -1, 12);
        label_13 = new QLabel(frame_12);
        label_13->setObjectName("label_13");
        label_13->setFont(font8);

        horizontalLayout_7->addWidget(label_13, 0, Qt::AlignmentFlag::AlignRight);

        label_12 = new QLabel(frame_12);
        label_12->setObjectName("label_12");
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Cambria")});
        font10.setPointSize(15);
        font10.setBold(true);
        font10.setItalic(false);
        label_12->setFont(font10);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 0);"));

        horizontalLayout_7->addWidget(label_12, 0, Qt::AlignmentFlag::AlignLeft);


        verticalLayout_16->addWidget(frame_12);

        label_11 = new QLabel(frame_11);
        label_11->setObjectName("label_11");
        label_11->setFont(font5);

        verticalLayout_16->addWidget(label_11, 0, Qt::AlignmentFlag::AlignHCenter);

        extractEdit = new QTextEdit(frame_11);
        extractEdit->setObjectName("extractEdit");
        extractEdit->setFont(font6);
        extractEdit->setReadOnly(true);

        verticalLayout_16->addWidget(extractEdit);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_16->addItem(verticalSpacer_6);

        verificationLabel = new QLabel(frame_11);
        verificationLabel->setObjectName("verificationLabel");
        QFont font11;
        font11.setFamilies({QString::fromUtf8("Verdana")});
        font11.setPointSize(15);
        font11.setBold(true);
        font11.setItalic(true);
        verificationLabel->setFont(font11);

        verticalLayout_16->addWidget(verificationLabel, 0, Qt::AlignmentFlag::AlignHCenter);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        verticalLayout_16->addItem(verticalSpacer_7);


        horizontalLayout_4->addWidget(frame_11);

        stackedWidget->addWidget(page_3);

        verticalLayout_10->addWidget(stackedWidget);


        verticalLayout->addWidget(bodyWidget);

        widget_4 = new QWidget(mainMenu);
        widget_4->setObjectName("widget_4");
        widget_4->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 26, 68);"));

        verticalLayout->addWidget(widget_4, 0, Qt::AlignmentFlag::AlignBottom);


        horizontalLayout->addWidget(mainMenu);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        HomeBtn->setToolTip(QCoreApplication::translate("MainWindow", "Home", nullptr));
#endif // QT_CONFIG(tooltip)
        HomeBtn->setText(QCoreApplication::translate("MainWindow", "ACCUEIL", nullptr));
#if QT_CONFIG(tooltip)
        TokenBtn->setToolTip(QCoreApplication::translate("MainWindow", "Token", nullptr));
#endif // QT_CONFIG(tooltip)
        TokenBtn->setText(QCoreApplication::translate("MainWindow", "TOKEN", nullptr));
#if QT_CONFIG(tooltip)
        VerificationBtn->setToolTip(QCoreApplication::translate("MainWindow", "Verification", nullptr));
#endif // QT_CONFIG(tooltip)
        VerificationBtn->setText(QCoreApplication::translate("MainWindow", "VERIFICATION", nullptr));
        AlgorithmsBtn->setText(QCoreApplication::translate("MainWindow", "ALGORITHMES", nullptr));
#if QT_CONFIG(tooltip)
        CloseMenuBtn->setToolTip(QCoreApplication::translate("MainWindow", "CloseMenu", nullptr));
#endif // QT_CONFIG(tooltip)
        CloseMenuBtn->setText(QString());
        HS256Btn->setText(QCoreApplication::translate("MainWindow", "HS256", nullptr));
        HS384Btn->setText(QCoreApplication::translate("MainWindow", "HS384", nullptr));
        HS512Btn->setText(QCoreApplication::translate("MainWindow", "HS512", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "JWT, ou JSON Web Token, est un format utilis\303\251 pour l'authentification et l'\303\251change s\303\251curis\303\251 de donn\303\251es.\n"
"", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<Decode, Verify and Generate JSON Web Tokens>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "TOKEN", nullptr));
        encodeBtn->setText(QCoreApplication::translate("MainWindow", "Encoder", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Algorithme :", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "HS256", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "HEADER", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "PAYLOAD", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "SIGNATURE", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "HMACSHA256(\n"
"  base64UrlEncode(header) + \".\" +\n"
"  base64UrlEncode(payload),", nullptr));
        privatekeyEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "cl\303\251 secr\303\250te", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "TOKEN", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "La Cl\303\251 Secr\303\250te", nullptr));
        verificationBtn->setText(QCoreApplication::translate("MainWindow", "VERIFIER", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Algorithme :", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "HS256", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "CONTENTS", nullptr));
        verificationLabel->setText(QCoreApplication::translate("MainWindow", "VERIFICATION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
