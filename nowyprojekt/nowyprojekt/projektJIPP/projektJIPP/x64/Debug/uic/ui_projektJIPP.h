/********************************************************************************
** Form generated from reading UI file 'projektJIPP.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJEKTJIPP_H
#define UI_PROJEKTJIPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projektJIPPClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *MainPage;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *titleLabel;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_12;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton;
    QPushButton *manageButton;
    QPushButton *viewButton;
    QFrame *frame_13;
    QGridLayout *gridLayout_9;
    QLabel *label_13;
    QWidget *filePage;
    QWidget *viewPage;
    QGridLayout *gridLayout_5;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_9;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QFrame *frame_8;
    QGridLayout *gridLayout_6;
    QTableWidget *viewTableWidget;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QComboBox *sortComboBox;
    QLabel *label;
    QComboBox *searchComboBox;
    QLabel *label_2;
    QLineEdit *searchDataInput;
    QPushButton *searchButton;
    QPushButton *pushButton_4;
    QPushButton *goBackViewButton;
    QWidget *managePage;
    QGridLayout *gridLayout_4;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_6;
    QGridLayout *gridLayout_8;
    QLabel *label_5;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QLineEdit *imieLineEdit;
    QLabel *label_7;
    QLineEdit *nazwiskoLineEdit;
    QLabel *label_8;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QSpinBox *dzienUrodzeniaSpinBox;
    QLabel *label_11;
    QSpinBox *miesiacUrodzeniaSpinBox;
    QLabel *label_12;
    QSpinBox *rokUrodzeniaSpinBox;
    QLabel *label_9;
    QLineEdit *numerTelefonuLineEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *goBackManageButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *projektJIPPClass)
    {
        if (projektJIPPClass->objectName().isEmpty())
            projektJIPPClass->setObjectName("projektJIPPClass");
        projektJIPPClass->resize(943, 772);
        centralWidget = new QWidget(projektJIPPClass);
        centralWidget->setObjectName("centralWidget");
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 240, 245);"));
        MainPage = new QWidget();
        MainPage->setObjectName("MainPage");
        gridLayout_2 = new QGridLayout(MainPage);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(MainPage);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMaximumSize(QSize(16777215, 60));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
""));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName("gridLayout_3");
        titleLabel = new QLabel(frame_2);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 240, 245);\n"
"font: 600 20pt \"Yu Gothic UI Semibold\";"));
        titleLabel->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_3->addWidget(titleLabel, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        frame_12 = new QFrame(frame_3);
        frame_12->setObjectName("frame_12");
        frame_12->setMaximumSize(QSize(250, 16777215));
        frame_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 180, 180);\n"
""));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_10 = new QGridLayout(frame_12);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName("gridLayout_10");
        pushButton = new QPushButton(frame_12);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(0, 40));
        pushButton->setMaximumSize(QSize(16777215, 40));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        gridLayout_10->addWidget(pushButton, 2, 0, 1, 1);

        manageButton = new QPushButton(frame_12);
        manageButton->setObjectName("manageButton");
        manageButton->setMinimumSize(QSize(0, 40));
        manageButton->setMaximumSize(QSize(16777215, 40));
        manageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        gridLayout_10->addWidget(manageButton, 0, 0, 1, 1);

        viewButton = new QPushButton(frame_12);
        viewButton->setObjectName("viewButton");
        viewButton->setMinimumSize(QSize(0, 40));
        viewButton->setMaximumSize(QSize(16777215, 40));
        viewButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        gridLayout_10->addWidget(viewButton, 1, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_12);

        frame_13 = new QFrame(frame_3);
        frame_13->setObjectName("frame_13");
        frame_13->setStyleSheet(QString::fromUtf8(""));
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_9 = new QGridLayout(frame_13);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName("gridLayout_9");
        label_13 = new QLabel(frame_13);
        label_13->setObjectName("label_13");
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/projektJIPP/adressBook.jpg")));

        gridLayout_9->addWidget(label_13, 0, 0, 1, 1);


        horizontalLayout_2->addWidget(frame_13);


        verticalLayout->addWidget(frame_3);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        stackedWidget->addWidget(MainPage);
        filePage = new QWidget();
        filePage->setObjectName("filePage");
        stackedWidget->addWidget(filePage);
        viewPage = new QWidget();
        viewPage->setObjectName("viewPage");
        gridLayout_5 = new QGridLayout(viewPage);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName("gridLayout_5");
        frame_5 = new QFrame(viewPage);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        frame_9 = new QFrame(frame_5);
        frame_9->setObjectName("frame_9");
        frame_9->setMinimumSize(QSize(0, 60));
        frame_9->setMaximumSize(QSize(16777215, 60));
        frame_9->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_7 = new QGridLayout(frame_9);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName("gridLayout_7");
        label_4 = new QLabel(frame_9);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 240, 245);\n"
"font: 600 20pt \"Yu Gothic UI Semibold\";"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);


        verticalLayout_4->addWidget(frame_9);

        frame_8 = new QFrame(frame_5);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_6 = new QGridLayout(frame_8);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        viewTableWidget = new QTableWidget(frame_8);
        viewTableWidget->setObjectName("viewTableWidget");
        viewTableWidget->setMinimumSize(QSize(650, 0));
        viewTableWidget->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);"));

        gridLayout_6->addWidget(viewTableWidget, 0, 0, 1, 1);

        frame_10 = new QFrame(frame_8);
        frame_10->setObjectName("frame_10");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_10->sizePolicy().hasHeightForWidth());
        frame_10->setSizePolicy(sizePolicy);
        frame_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 180, 185);\n"
"\n"
""));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_10);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(frame_10);
        label_3->setObjectName("label_3");
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));

        verticalLayout_5->addWidget(label_3);

        sortComboBox = new QComboBox(frame_10);
        sortComboBox->addItem(QString());
        sortComboBox->addItem(QString());
        sortComboBox->addItem(QString());
        sortComboBox->setObjectName("sortComboBox");
        sortComboBox->setMinimumSize(QSize(0, 30));
        sortComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_5->addWidget(sortComboBox);

        label = new QLabel(frame_10);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 30));
        label->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));

        verticalLayout_5->addWidget(label);

        searchComboBox = new QComboBox(frame_10);
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->addItem(QString());
        searchComboBox->setObjectName("searchComboBox");
        searchComboBox->setMinimumSize(QSize(0, 30));
        searchComboBox->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_5->addWidget(searchComboBox);

        label_2 = new QLabel(frame_10);
        label_2->setObjectName("label_2");
        label_2->setMaximumSize(QSize(16777215, 30));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));

        verticalLayout_5->addWidget(label_2);

        searchDataInput = new QLineEdit(frame_10);
        searchDataInput->setObjectName("searchDataInput");
        searchDataInput->setMinimumSize(QSize(0, 30));
        searchDataInput->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_5->addWidget(searchDataInput);

        searchButton = new QPushButton(frame_10);
        searchButton->setObjectName("searchButton");
        searchButton->setMinimumSize(QSize(0, 30));
        searchButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_5->addWidget(searchButton);

        pushButton_4 = new QPushButton(frame_10);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(0, 30));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_5->addWidget(pushButton_4);

        goBackViewButton = new QPushButton(frame_10);
        goBackViewButton->setObjectName("goBackViewButton");
        goBackViewButton->setMinimumSize(QSize(0, 30));
        goBackViewButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_5->addWidget(goBackViewButton);


        gridLayout_6->addWidget(frame_10, 0, 1, 1, 1);


        verticalLayout_4->addWidget(frame_8);


        gridLayout_5->addWidget(frame_5, 0, 0, 1, 1);

        stackedWidget->addWidget(viewPage);
        managePage = new QWidget();
        managePage->setObjectName("managePage");
        gridLayout_4 = new QGridLayout(managePage);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName("gridLayout_4");
        frame_4 = new QFrame(managePage);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setMaximumSize(QSize(16777215, 60));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
""));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout_8 = new QGridLayout(frame_6);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName("gridLayout_8");
        label_5 = new QLabel(frame_6);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 240, 245);\n"
"font: 600 20pt \"Yu Gothic UI Semibold\";"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_8->addWidget(label_5, 0, 0, 1, 1);


        verticalLayout_3->addWidget(frame_6);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_7);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(frame_7);
        label_6->setObjectName("label_6");
        label_6->setMaximumSize(QSize(16777215, 30));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));

        verticalLayout_6->addWidget(label_6);

        imieLineEdit = new QLineEdit(frame_7);
        imieLineEdit->setObjectName("imieLineEdit");
        imieLineEdit->setMaximumSize(QSize(16777215, 30));
        imieLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_6->addWidget(imieLineEdit);

        label_7 = new QLabel(frame_7);
        label_7->setObjectName("label_7");
        label_7->setMaximumSize(QSize(16777215, 30));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));

        verticalLayout_6->addWidget(label_7);

        nazwiskoLineEdit = new QLineEdit(frame_7);
        nazwiskoLineEdit->setObjectName("nazwiskoLineEdit");
        nazwiskoLineEdit->setMaximumSize(QSize(16777215, 30));
        nazwiskoLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_6->addWidget(nazwiskoLineEdit);

        label_8 = new QLabel(frame_7);
        label_8->setObjectName("label_8");
        label_8->setMaximumSize(QSize(16777215, 30));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));

        verticalLayout_6->addWidget(label_8);

        frame_11 = new QFrame(frame_7);
        frame_11->setObjectName("frame_11");
        frame_11->setMaximumSize(QSize(16777215, 50));
        frame_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 180, 180);\n"
"\n"
""));
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame_11);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        label_10 = new QLabel(frame_11);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));
        label_10->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_10);

        dzienUrodzeniaSpinBox = new QSpinBox(frame_11);
        dzienUrodzeniaSpinBox->setObjectName("dzienUrodzeniaSpinBox");
        dzienUrodzeniaSpinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        horizontalLayout->addWidget(dzienUrodzeniaSpinBox);

        label_11 = new QLabel(frame_11);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));
        label_11->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_11);

        miesiacUrodzeniaSpinBox = new QSpinBox(frame_11);
        miesiacUrodzeniaSpinBox->setObjectName("miesiacUrodzeniaSpinBox");
        miesiacUrodzeniaSpinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        horizontalLayout->addWidget(miesiacUrodzeniaSpinBox);

        label_12 = new QLabel(frame_11);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));
        label_12->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        horizontalLayout->addWidget(label_12);

        rokUrodzeniaSpinBox = new QSpinBox(frame_11);
        rokUrodzeniaSpinBox->setObjectName("rokUrodzeniaSpinBox");
        rokUrodzeniaSpinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        horizontalLayout->addWidget(rokUrodzeniaSpinBox);


        verticalLayout_6->addWidget(frame_11);

        label_9 = new QLabel(frame_7);
        label_9->setObjectName("label_9");
        label_9->setMaximumSize(QSize(16777215, 30));
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(240, 128, 128);\n"
"font: 700 9pt \"Segoe UI\";"));

        verticalLayout_6->addWidget(label_9);

        numerTelefonuLineEdit = new QLineEdit(frame_7);
        numerTelefonuLineEdit->setObjectName("numerTelefonuLineEdit");
        numerTelefonuLineEdit->setMaximumSize(QSize(16777215, 30));
        numerTelefonuLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_6->addWidget(numerTelefonuLineEdit);


        verticalLayout_3->addWidget(frame_7);

        pushButton_2 = new QPushButton(frame_4);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMaximumSize(QSize(16777215, 30));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame_4);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMaximumSize(QSize(16777215, 30));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_3->addWidget(pushButton_3);

        goBackManageButton = new QPushButton(frame_4);
        goBackManageButton->setObjectName("goBackManageButton");
        goBackManageButton->setMaximumSize(QSize(16777215, 30));
        goBackManageButton->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 128, 128);\n"
"color: rgb(255, 240, 245);"));

        verticalLayout_3->addWidget(goBackManageButton);


        gridLayout_4->addWidget(frame_4, 0, 0, 1, 1);

        stackedWidget->addWidget(managePage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        projektJIPPClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(projektJIPPClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 943, 21));
        projektJIPPClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(projektJIPPClass);
        mainToolBar->setObjectName("mainToolBar");
        projektJIPPClass->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);

        retranslateUi(projektJIPPClass);
        QObject::connect(goBackManageButton, SIGNAL(clicked()), projektJIPPClass, SLOT(wyswietlMainWindow()));
        QObject::connect(manageButton, SIGNAL(clicked()), projektJIPPClass, SLOT(wyswietlManageWindow()));
        QObject::connect(viewButton, SIGNAL(clicked()), projektJIPPClass, SLOT(wyswietlViewWindow()));
        QObject::connect(goBackViewButton, SIGNAL(clicked()), projektJIPPClass, SLOT(wyswietlMainWindow()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), projektJIPPClass, SLOT(on_dodajButton_clicked()));
        QObject::connect(sortComboBox, SIGNAL(currentIndexChanged(int)), projektJIPPClass, SLOT(sortujListeStudentow()));
        QObject::connect(searchButton, SIGNAL(clicked()), projektJIPPClass, SLOT(wyszukajStudentaPoDanych()));
        QObject::connect(pushButton, SIGNAL(clicked()), projektJIPPClass, SLOT(on_saveButton_clicked()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), projektJIPPClass, SLOT(on_removeButton_clicked()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), projektJIPPClass, SLOT(policzElementyKolejki()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(projektJIPPClass);
    } // setupUi

    void retranslateUi(QMainWindow *projektJIPPClass)
    {
        projektJIPPClass->setWindowTitle(QCoreApplication::translate("projektJIPPClass", "projektJIPP", nullptr));
        titleLabel->setText(QCoreApplication::translate("projektJIPPClass", "ADRESS BOOK", nullptr));
        pushButton->setText(QCoreApplication::translate("projektJIPPClass", "SAVE FILE", nullptr));
        manageButton->setText(QCoreApplication::translate("projektJIPPClass", "MANAGE ADRESSES", nullptr));
        viewButton->setText(QCoreApplication::translate("projektJIPPClass", "SHOW ADRESSES", nullptr));
        label_13->setText(QString());
        label_4->setText(QCoreApplication::translate("projektJIPPClass", "VIEW PAGE", nullptr));
        label_3->setText(QCoreApplication::translate("projektJIPPClass", "Sort by:", nullptr));
        sortComboBox->setItemText(0, QCoreApplication::translate("projektJIPPClass", "surname", nullptr));
        sortComboBox->setItemText(1, QCoreApplication::translate("projektJIPPClass", "name", nullptr));
        sortComboBox->setItemText(2, QCoreApplication::translate("projektJIPPClass", "birth date", nullptr));

        label->setText(QCoreApplication::translate("projektJIPPClass", "Search by:", nullptr));
        searchComboBox->setItemText(0, QCoreApplication::translate("projektJIPPClass", "birth date", nullptr));
        searchComboBox->setItemText(1, QCoreApplication::translate("projektJIPPClass", "surname", nullptr));
        searchComboBox->setItemText(2, QCoreApplication::translate("projektJIPPClass", "name", nullptr));
        searchComboBox->setItemText(3, QCoreApplication::translate("projektJIPPClass", "phone number", nullptr));

        label_2->setText(QCoreApplication::translate("projektJIPPClass", "Data to search:", nullptr));
        searchButton->setText(QCoreApplication::translate("projektJIPPClass", "SEARCH", nullptr));
        pushButton_4->setText(QCoreApplication::translate("projektJIPPClass", "GET ELEMENT COUNT", nullptr));
        goBackViewButton->setText(QCoreApplication::translate("projektJIPPClass", "GO BACK", nullptr));
        label_5->setText(QCoreApplication::translate("projektJIPPClass", "MANAGE", nullptr));
        label_6->setText(QCoreApplication::translate("projektJIPPClass", "Name:", nullptr));
        label_7->setText(QCoreApplication::translate("projektJIPPClass", "Surname:", nullptr));
        label_8->setText(QCoreApplication::translate("projektJIPPClass", "Birth date:", nullptr));
        label_10->setText(QCoreApplication::translate("projektJIPPClass", "Day:", nullptr));
        label_11->setText(QCoreApplication::translate("projektJIPPClass", "Month:", nullptr));
        label_12->setText(QCoreApplication::translate("projektJIPPClass", "Year:", nullptr));
        label_9->setText(QCoreApplication::translate("projektJIPPClass", "Phone number:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("projektJIPPClass", "ADD", nullptr));
        pushButton_3->setText(QCoreApplication::translate("projektJIPPClass", "REMOVE BY PHONE NUMBER", nullptr));
        goBackManageButton->setText(QCoreApplication::translate("projektJIPPClass", "GO BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class projektJIPPClass: public Ui_projektJIPPClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJEKTJIPP_H
