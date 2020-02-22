/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result;
    QPushButton *pushButton_C;
    QPushButton *pushButton_PM;
    QPushButton *pushButton_PC;
    QPushButton *pushButton_DIV;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_MULT;
    QPushButton *pushButton_9;
    QPushButton *pushButton_MIN;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_PL;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_EQ;
    QPushButton *pushButton_D;
    QPushButton *pushButton_B;
    QPushButton *pushButton_0;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(360, 534);
        MainWindow->setWindowOpacity(0.980000000000000);
        MainWindow->setStyleSheet(QString::fromUtf8("background: #3A4655;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        result = new QLabel(centralwidget);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(5, 0, 350, 80));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(result->sizePolicy().hasHeightForWidth());
        result->setSizePolicy(sizePolicy);
        result->setStyleSheet(QString::fromUtf8("QLabel{\n"
"qproperty-aligment: 'AlingVCenter | AlignRight';\n"
"  font-size: 30px;\n"
"color: #fff;\n"
"}\n"
"  \n"
"\n"
""));
        pushButton_C = new QPushButton(centralwidget);
        pushButton_C->setObjectName(QString::fromUtf8("pushButton_C"));
        pushButton_C->setGeometry(QRect(0, 80, 90, 90));
        pushButton_C->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #D95D4E;\n"
"  background: #404D5E;"));
        pushButton_PM = new QPushButton(centralwidget);
        pushButton_PM->setObjectName(QString::fromUtf8("pushButton_PM"));
        pushButton_PM->setGeometry(QRect(90, 80, 90, 90));
        pushButton_PM->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_PC = new QPushButton(centralwidget);
        pushButton_PC->setObjectName(QString::fromUtf8("pushButton_PC"));
        pushButton_PC->setGeometry(QRect(180, 80, 90, 90));
        pushButton_PC->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_DIV = new QPushButton(centralwidget);
        pushButton_DIV->setObjectName(QString::fromUtf8("pushButton_DIV"));
        pushButton_DIV->setGeometry(QRect(270, 80, 90, 90));
        pushButton_DIV->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(0, 170, 90, 90));
        pushButton_7->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(90, 170, 90, 90));
        pushButton_8->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_MULT = new QPushButton(centralwidget);
        pushButton_MULT->setObjectName(QString::fromUtf8("pushButton_MULT"));
        pushButton_MULT->setGeometry(QRect(270, 170, 90, 90));
        pushButton_MULT->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(180, 170, 90, 90));
        pushButton_9->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_MIN = new QPushButton(centralwidget);
        pushButton_MIN->setObjectName(QString::fromUtf8("pushButton_MIN"));
        pushButton_MIN->setGeometry(QRect(270, 260, 90, 90));
        pushButton_MIN->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 260, 90, 90));
        pushButton_4->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(90, 260, 90, 90));
        pushButton_5->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 260, 90, 90));
        pushButton_6->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_PL = new QPushButton(centralwidget);
        pushButton_PL->setObjectName(QString::fromUtf8("pushButton_PL"));
        pushButton_PL->setGeometry(QRect(270, 350, 90, 90));
        pushButton_PL->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_1 = new QPushButton(centralwidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(0, 350, 90, 90));
        pushButton_1->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 350, 90, 90));
        pushButton_2->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(180, 350, 90, 90));
        pushButton_3->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        pushButton_EQ = new QPushButton(centralwidget);
        pushButton_EQ->setObjectName(QString::fromUtf8("pushButton_EQ"));
        pushButton_EQ->setGeometry(QRect(270, 440, 90, 90));
        pushButton_EQ->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_D = new QPushButton(centralwidget);
        pushButton_D->setObjectName(QString::fromUtf8("pushButton_D"));
        pushButton_D->setGeometry(QRect(0, 440, 91, 90));
        pushButton_D->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_B = new QPushButton(centralwidget);
        pushButton_B->setObjectName(QString::fromUtf8("pushButton_B"));
        pushButton_B->setGeometry(QRect(180, 440, 90, 90));
        pushButton_B->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2p x #3C4857;color: #AEB3BA;\n"
"  background: #404D5E;"));
        pushButton_0 = new QPushButton(centralwidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(90, 440, 91, 90));
        pushButton_0->setStyleSheet(QString::fromUtf8("width: 25%;\n"
"  background: #425062;\n"
"  color: #fff;\n"
"  padding: 20px;\n"
"  display: inline-block;\n"
"  font-size: 25px;\n"
"  text-align: center;\n"
"  vertical-align: middle;\n"
"  margin-right: -4px;\n"
"  border-right: solid 2px #3C4857;\n"
"  border-bottom: solid 2px #3C4857;"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Calculator", nullptr));
        result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_PM->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_PC->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_DIV->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_MULT->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_MIN->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_PL->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_EQ->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_D->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_B->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
