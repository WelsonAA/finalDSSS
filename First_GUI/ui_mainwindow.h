/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *ChessBoard;
    QLabel *KnightW;
    QLabel *PawnB2;
    QLabel *BishopW;
    QLabel *PawnB1;
    QPushButton *btn_Bishop;
    QLabel *label;
    QLabel *label_2;
    QLabel *lbl_result;
    QTextEdit *te_Src;
    QTextEdit *te_Dest;
    QLabel *label_3;
    QTextEdit *te_Pwn;
    QPushButton *btn_addPwn;
    QLabel *PawnB3;
    QLabel *PawnB4;
    QLabel *PawnB5;
    QLabel *PawnB6;
    QLabel *PawnB7;
    QLabel *PawnB8;
    QLabel *no1;
    QLabel *no2;
    QLabel *no3;
    QLabel *no4;
    QLabel *no5;
    QLabel *no6;
    QLabel *no7;
    QLabel *no8;
    QPushButton *btn_Calculate;
    QPushButton *btn_knight;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_15;
    QLabel *label_19;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(2000, 2000);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setBaseSize(QSize(200, 200));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        ChessBoard = new QLabel(centralwidget);
        ChessBoard->setObjectName("ChessBoard");
        ChessBoard->setGeometry(QRect(160, 110, 700, 700));
        ChessBoard->setBaseSize(QSize(700, 700));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        ChessBoard->setFont(font);
        ChessBoard->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/720px-Chessboard480.svg.png")));
        KnightW = new QLabel(centralwidget);
        KnightW->setObjectName("KnightW");
        KnightW->setGeometry(QRect(160, 800, 71, 81));
        KnightW->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/horseya.png")));
        PawnB2 = new QLabel(centralwidget);
        PawnB2->setObjectName("PawnB2");
        PawnB2->setGeometry(QRect(160, 800, 71, 81));
        PawnB2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        BishopW = new QLabel(centralwidget);
        BishopW->setObjectName("BishopW");
        BishopW->setGeometry(QRect(160, 800, 75, 75));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(BishopW->sizePolicy().hasHeightForWidth());
        BishopW->setSizePolicy(sizePolicy1);
        BishopW->setMinimumSize(QSize(75, 75));
        BishopW->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/Bishopaya.png")));
        PawnB1 = new QLabel(centralwidget);
        PawnB1->setObjectName("PawnB1");
        PawnB1->setGeometry(QRect(160, 800, 71, 81));
        PawnB1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        btn_Bishop = new QPushButton(centralwidget);
        btn_Bishop->setObjectName("btn_Bishop");
        btn_Bishop->setGeometry(QRect(1080, 340, 191, 51));
        QFont font1;
        font1.setPointSize(18);
        btn_Bishop->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(840, 250, 191, 31));
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(840, 290, 221, 31));
        label_2->setFont(font2);
        lbl_result = new QLabel(centralwidget);
        lbl_result->setObjectName("lbl_result");
        lbl_result->setGeometry(QRect(870, 510, 461, 101));
        lbl_result->setFont(font1);
        te_Src = new QTextEdit(centralwidget);
        te_Src->setObjectName("te_Src");
        te_Src->setEnabled(true);
        te_Src->setGeometry(QRect(1080, 260, 111, 21));
        te_Src->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_Src->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_Dest = new QTextEdit(centralwidget);
        te_Dest->setObjectName("te_Dest");
        te_Dest->setEnabled(true);
        te_Dest->setGeometry(QRect(1080, 300, 111, 21));
        te_Dest->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_Dest->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(840, 420, 141, 20));
        label_3->setFont(font2);
        te_Pwn = new QTextEdit(centralwidget);
        te_Pwn->setObjectName("te_Pwn");
        te_Pwn->setEnabled(true);
        te_Pwn->setGeometry(QRect(1000, 420, 111, 21));
        te_Pwn->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        te_Pwn->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        btn_addPwn = new QPushButton(centralwidget);
        btn_addPwn->setObjectName("btn_addPwn");
        btn_addPwn->setGeometry(QRect(1150, 410, 171, 31));
        btn_addPwn->setFont(font2);
        PawnB3 = new QLabel(centralwidget);
        PawnB3->setObjectName("PawnB3");
        PawnB3->setGeometry(QRect(160, 800, 71, 81));
        PawnB3->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB4 = new QLabel(centralwidget);
        PawnB4->setObjectName("PawnB4");
        PawnB4->setGeometry(QRect(160, 800, 71, 81));
        PawnB4->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB5 = new QLabel(centralwidget);
        PawnB5->setObjectName("PawnB5");
        PawnB5->setGeometry(QRect(160, 800, 71, 81));
        PawnB5->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB6 = new QLabel(centralwidget);
        PawnB6->setObjectName("PawnB6");
        PawnB6->setGeometry(QRect(160, 800, 71, 81));
        PawnB6->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB7 = new QLabel(centralwidget);
        PawnB7->setObjectName("PawnB7");
        PawnB7->setGeometry(QRect(160, 800, 71, 81));
        PawnB7->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        PawnB8 = new QLabel(centralwidget);
        PawnB8->setObjectName("PawnB8");
        PawnB8->setGeometry(QRect(160, 800, 71, 81));
        PawnB8->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/pawnBlacks.png")));
        no1 = new QLabel(centralwidget);
        no1->setObjectName("no1");
        no1->setGeometry(QRect(160, 800, 63, 61));
        no1->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/1g.png")));
        no2 = new QLabel(centralwidget);
        no2->setObjectName("no2");
        no2->setGeometry(QRect(160, 800, 63, 61));
        no2->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/2g.png")));
        no3 = new QLabel(centralwidget);
        no3->setObjectName("no3");
        no3->setGeometry(QRect(160, 800, 63, 61));
        no3->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/3g.png")));
        no4 = new QLabel(centralwidget);
        no4->setObjectName("no4");
        no4->setGeometry(QRect(160, 800, 63, 61));
        no4->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/4g.png")));
        no5 = new QLabel(centralwidget);
        no5->setObjectName("no5");
        no5->setGeometry(QRect(160, 800, 63, 61));
        no5->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/5g.png")));
        no6 = new QLabel(centralwidget);
        no6->setObjectName("no6");
        no6->setGeometry(QRect(160, 800, 63, 61));
        no6->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/6g.png")));
        no7 = new QLabel(centralwidget);
        no7->setObjectName("no7");
        no7->setGeometry(QRect(160, 800, 63, 61));
        no7->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/7g.png")));
        no8 = new QLabel(centralwidget);
        no8->setObjectName("no8");
        no8->setGeometry(QRect(160, 800, 63, 61));
        no8->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/8g.png")));
        btn_Calculate = new QPushButton(centralwidget);
        btn_Calculate->setObjectName("btn_Calculate");
        btn_Calculate->setGeometry(QRect(890, 190, 201, 51));
        btn_Calculate->setFont(font1);
        btn_knight = new QPushButton(centralwidget);
        btn_knight->setObjectName("btn_knight");
        btn_knight->setGeometry(QRect(850, 340, 201, 51));
        btn_knight->setFont(font1);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(30, 120, 121, 671));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName("label_6");
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        label_6->setFont(font3);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName("label_11");
        label_11->setFont(font3);
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_11);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName("label_10");
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_10);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_9);

        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName("label_8");
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_8);

        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName("label_7");
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_7);

        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font3);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font3);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(160, 19, 671, 101));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(horizontalLayoutWidget);
        label_16->setObjectName("label_16");
        label_16->setFont(font3);
        label_16->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_16);

        label_17 = new QLabel(horizontalLayoutWidget);
        label_17->setObjectName("label_17");
        label_17->setFont(font3);
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_17);

        label_18 = new QLabel(horizontalLayoutWidget);
        label_18->setObjectName("label_18");
        label_18->setFont(font3);
        label_18->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_18);

        label_15 = new QLabel(horizontalLayoutWidget);
        label_15->setObjectName("label_15");
        label_15->setFont(font3);
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_15);

        label_19 = new QLabel(horizontalLayoutWidget);
        label_19->setObjectName("label_19");
        label_19->setFont(font3);
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_19);

        label_14 = new QLabel(horizontalLayoutWidget);
        label_14->setObjectName("label_14");
        label_14->setFont(font3);
        label_14->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_14);

        label_13 = new QLabel(horizontalLayoutWidget);
        label_13->setObjectName("label_13");
        label_13->setFont(font3);
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_13);

        label_12 = new QLabel(horizontalLayoutWidget);
        label_12->setObjectName("label_12");
        label_12->setFont(font3);
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_12);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 2000, 17));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ChessBoard->setText(QString());
        KnightW->setText(QString());
        PawnB2->setText(QString());
        BishopW->setText(QString());
        PawnB1->setText(QString());
        btn_Bishop->setText(QCoreApplication::translate("MainWindow", "Bishop", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Starting Position", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Target Position", nullptr));
        lbl_result->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Pawn Position", nullptr));
        btn_addPwn->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        PawnB3->setText(QString());
        PawnB4->setText(QString());
        PawnB5->setText(QString());
        PawnB6->setText(QString());
        PawnB7->setText(QString());
        PawnB8->setText(QString());
        no1->setText(QString());
        no2->setText(QString());
        no3->setText(QString());
        no4->setText(QString());
        no5->setText(QString());
        no6->setText(QString());
        no7->setText(QString());
        no8->setText(QString());
        btn_Calculate->setText(QCoreApplication::translate("MainWindow", "Done", nullptr));
        btn_knight->setText(QCoreApplication::translate("MainWindow", "Knight", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "a", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "b", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "c", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "d", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "e", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "f", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "g", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "h", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
