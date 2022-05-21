/********************************************************************************
** Form generated from reading UI file 'tsp.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSP_H
#define UI_TSP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TSP
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Btn_Add_Top;
    QPushButton *Btn_Del_Top;
    QPushButton *Btn_Add_Edge_1;
    QPushButton *Btn_Add_Edge_2;
    QLineEdit *LE_Del_Top_index;
    QLabel *L_Add_Edge_1_Top_1;
    QLabel *L_Add_Edge_1_Top_2;
    QLineEdit *LE_Add_Edge_1_Top_1;
    QLineEdit *LE_Add_Edge_1_Top_2;
    QLabel *L_Add_Edge_1_Weight;
    QLineEdit *LE_Add_Edge_1_Weight;
    QLabel *L_Result;
    QLabel *L_Path_length;
    QLabel *L_Errors;
    QPushButton *L_Clear;
    QPushButton *help;
    QLabel *L_Add_Edge_2_Weight;
    QPushButton *Btn_Calculate;
    QLineEdit *LE_Add_Edge_2_Weight;
    QLabel *L_Add_Edge_1_Weight_2;
    QLineEdit *LE_Add_Edge_2_Top_2;
    QLabel *L_Add_Edge_1_Top_3;
    QLabel *L_Add_Edge_1_Top_4;
    QLineEdit *LE_Add_Edge_2_Top_1;

    void setupUi(QMainWindow *TSP)
    {
        if (TSP->objectName().isEmpty())
            TSP->setObjectName(QString::fromUtf8("TSP"));
        TSP->resize(913, 605);
        TSP->setStyleSheet(QString::fromUtf8("background-color: rgb(240, 240, 240);"));
        centralwidget = new QWidget(TSP);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 501, 581));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Btn_Add_Top = new QPushButton(centralwidget);
        Btn_Add_Top->setObjectName(QString::fromUtf8("Btn_Add_Top"));
        Btn_Add_Top->setGeometry(QRect(530, 10, 371, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("inherit"));
        font.setPointSize(10);
        Btn_Add_Top->setFont(font);
        Btn_Add_Top->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  min-width: 100px;\n"
"  font-family: inherit;\n"
"  appearance: none;\n"
"  border: 0;\n"
"  border-radius: 5px;\n"
"  background: #4676d7;\n"
"  color: #fff;\n"
"  padding: 8px 16px;\n"
"  font-size: 1rem;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: #1d49aa;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 4px #cbd6ee;\n"
"}"));
        Btn_Del_Top = new QPushButton(centralwidget);
        Btn_Del_Top->setObjectName(QString::fromUtf8("Btn_Del_Top"));
        Btn_Del_Top->setGeometry(QRect(530, 400, 181, 31));
        Btn_Del_Top->setFont(font);
        Btn_Del_Top->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  min-width: 100px;\n"
"  font-family: inherit;\n"
"  appearance: none;\n"
"  border: 0;\n"
"  border-radius: 5px;\n"
"  background: #4676d7;\n"
"  color: #fff;\n"
"  padding: 8px 16px;\n"
"  font-size: 1rem;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: #1d49aa;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 4px #cbd6ee;\n"
"}"));
        Btn_Add_Edge_1 = new QPushButton(centralwidget);
        Btn_Add_Edge_1->setObjectName(QString::fromUtf8("Btn_Add_Edge_1"));
        Btn_Add_Edge_1->setGeometry(QRect(530, 180, 371, 31));
        Btn_Add_Edge_1->setFont(font);
        Btn_Add_Edge_1->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  min-width: 100px;\n"
"  font-family: inherit;\n"
"  appearance: none;\n"
"  border: 0;\n"
"  border-radius: 5px;\n"
"  background: #4676d7;\n"
"  color: #fff;\n"
"  padding: 8px 16px;\n"
"  font-size: 1rem;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: #1d49aa;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 4px #cbd6ee;\n"
"}"));
        Btn_Add_Edge_2 = new QPushButton(centralwidget);
        Btn_Add_Edge_2->setObjectName(QString::fromUtf8("Btn_Add_Edge_2"));
        Btn_Add_Edge_2->setGeometry(QRect(530, 350, 371, 31));
        Btn_Add_Edge_2->setFont(font);
        Btn_Add_Edge_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  min-width: 100px;\n"
"  font-family: inherit;\n"
"  appearance: none;\n"
"  border: 0;\n"
"  border-radius: 5px;\n"
"  background: #4676d7;\n"
"  color: #fff;\n"
"  padding: 8px 16px;\n"
"  font-size: 1rem;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: #1d49aa;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 4px #cbd6ee;\n"
"}QPushButton\n"
"{\n"
"  min-width: 100px;\n"
"  font-family: inherit;\n"
"  appearance: none;\n"
"  border: 0;\n"
"  border-radius: 5px;\n"
"  background: #4676d7;\n"
"  color: #fff;\n"
"  padding: 8px 16px;\n"
"  font-size: 1rem;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: #1d49aa;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 4px #cbd6ee;\n"
"}"));
        LE_Del_Top_index = new QLineEdit(centralwidget);
        LE_Del_Top_index->setObjectName(QString::fromUtf8("LE_Del_Top_index"));
        LE_Del_Top_index->setGeometry(QRect(730, 400, 31, 31));
        QFont font1;
        font1.setPointSize(10);
        LE_Del_Top_index->setFont(font1);
        LE_Del_Top_index->setStyleSheet(QString::fromUtf8("color: rgb(71, 98, 68);\n"
"background-color: rgb(125, 184, 255);"));
        LE_Del_Top_index->setFrame(true);
        LE_Del_Top_index->setAlignment(Qt::AlignCenter);
        LE_Del_Top_index->setDragEnabled(false);
        L_Add_Edge_1_Top_1 = new QLabel(centralwidget);
        L_Add_Edge_1_Top_1->setObjectName(QString::fromUtf8("L_Add_Edge_1_Top_1"));
        L_Add_Edge_1_Top_1->setGeometry(QRect(550, 60, 161, 31));
        L_Add_Edge_1_Top_1->setFont(font1);
        L_Add_Edge_1_Top_1->setStyleSheet(QString::fromUtf8("color: #4676d7;"));
        L_Add_Edge_1_Top_2 = new QLabel(centralwidget);
        L_Add_Edge_1_Top_2->setObjectName(QString::fromUtf8("L_Add_Edge_1_Top_2"));
        L_Add_Edge_1_Top_2->setGeometry(QRect(550, 100, 161, 31));
        L_Add_Edge_1_Top_2->setFont(font1);
        L_Add_Edge_1_Top_2->setStyleSheet(QString::fromUtf8("color: #4676d7;"));
        LE_Add_Edge_1_Top_1 = new QLineEdit(centralwidget);
        LE_Add_Edge_1_Top_1->setObjectName(QString::fromUtf8("LE_Add_Edge_1_Top_1"));
        LE_Add_Edge_1_Top_1->setGeometry(QRect(730, 60, 31, 31));
        LE_Add_Edge_1_Top_1->setFont(font1);
        LE_Add_Edge_1_Top_1->setStyleSheet(QString::fromUtf8("color: rgb(71, 98, 68);\n"
"background-color: #4676d7;"));
        LE_Add_Edge_1_Top_1->setFrame(true);
        LE_Add_Edge_1_Top_1->setAlignment(Qt::AlignCenter);
        LE_Add_Edge_1_Top_1->setDragEnabled(false);
        LE_Add_Edge_1_Top_2 = new QLineEdit(centralwidget);
        LE_Add_Edge_1_Top_2->setObjectName(QString::fromUtf8("LE_Add_Edge_1_Top_2"));
        LE_Add_Edge_1_Top_2->setGeometry(QRect(730, 100, 31, 31));
        LE_Add_Edge_1_Top_2->setFont(font1);
        LE_Add_Edge_1_Top_2->setStyleSheet(QString::fromUtf8("color: rgb(71, 98, 68);\n"
"background-color:  rgb(150, 184, 255);"));
        LE_Add_Edge_1_Top_2->setFrame(true);
        LE_Add_Edge_1_Top_2->setAlignment(Qt::AlignCenter);
        LE_Add_Edge_1_Top_2->setDragEnabled(false);
        L_Add_Edge_1_Weight = new QLabel(centralwidget);
        L_Add_Edge_1_Weight->setObjectName(QString::fromUtf8("L_Add_Edge_1_Weight"));
        L_Add_Edge_1_Weight->setGeometry(QRect(550, 140, 81, 31));
        L_Add_Edge_1_Weight->setFont(font1);
        L_Add_Edge_1_Weight->setStyleSheet(QString::fromUtf8("color: #4676d7;"));
        LE_Add_Edge_1_Weight = new QLineEdit(centralwidget);
        LE_Add_Edge_1_Weight->setObjectName(QString::fromUtf8("LE_Add_Edge_1_Weight"));
        LE_Add_Edge_1_Weight->setGeometry(QRect(730, 140, 31, 31));
        LE_Add_Edge_1_Weight->setFont(font1);
        LE_Add_Edge_1_Weight->setStyleSheet(QString::fromUtf8("color: rgb(71, 98, 68);\n"
"background-color:  rgb(175, 184, 255);"));
        LE_Add_Edge_1_Weight->setFrame(true);
        LE_Add_Edge_1_Weight->setAlignment(Qt::AlignCenter);
        LE_Add_Edge_1_Weight->setDragEnabled(false);
        L_Result = new QLabel(centralwidget);
        L_Result->setObjectName(QString::fromUtf8("L_Result"));
        L_Result->setGeometry(QRect(520, 510, 381, 21));
        L_Result->setFont(font1);
        L_Result->setStyleSheet(QString::fromUtf8("color: rgb(1, 0, 153)"));
        L_Path_length = new QLabel(centralwidget);
        L_Path_length->setObjectName(QString::fromUtf8("L_Path_length"));
        L_Path_length->setGeometry(QRect(520, 540, 381, 21));
        L_Path_length->setFont(font1);
        L_Path_length->setStyleSheet(QString::fromUtf8("color: rgb(1, 0, 153)"));
        L_Errors = new QLabel(centralwidget);
        L_Errors->setObjectName(QString::fromUtf8("L_Errors"));
        L_Errors->setGeometry(QRect(520, 570, 381, 20));
        L_Errors->setFont(font1);
        L_Errors->setStyleSheet(QString::fromUtf8("color:rgb(217, 0, 4);"));
        L_Clear = new QPushButton(centralwidget);
        L_Clear->setObjectName(QString::fromUtf8("L_Clear"));
        L_Clear->setGeometry(QRect(420, 540, 84, 41));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        font2.setWeight(75);
        font2.setStrikeOut(false);
        L_Clear->setFont(font2);
        L_Clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:  rgb(211, 211, 211);\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color:  rgb(128, 128, 128);\n"
"     font: bold 14px;\n"
"     min-width: 4em;\n"
"     padding: 6px;\n"
" }\n"
"QPushButton:pressed {\n"
"     background-color: rgb(220, 220, 220);\n"
"     border-style: inset;\n"
" }"));
        help = new QPushButton(centralwidget);
        help->setObjectName(QString::fromUtf8("help"));
        help->setGeometry(QRect(20, 540, 84, 41));
        help->setFont(font2);
        help->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"     background-color:  rgb(211, 211, 211);\n"
"     border-style: outset;\n"
"     border-width: 2px;\n"
"     border-radius: 10px;\n"
"     border-color:  rgb(128, 128, 128);\n"
"     font: bold 14px;\n"
"     min-width: 1em;\n"
"     padding: 6px;\n"
" }\n"
"QPushButton:pressed {\n"
"     background-color: rgb(220, 220, 220);\n"
"     border-style: inset;\n"
" }"));
        L_Add_Edge_2_Weight = new QLabel(centralwidget);
        L_Add_Edge_2_Weight->setObjectName(QString::fromUtf8("L_Add_Edge_2_Weight"));
        L_Add_Edge_2_Weight->setGeometry(QRect(620, 260, 81, 31));
        L_Add_Edge_2_Weight->setFont(font1);
        L_Add_Edge_2_Weight->setStyleSheet(QString::fromUtf8("color: rgb(168, 168, 129);"));
        Btn_Calculate = new QPushButton(centralwidget);
        Btn_Calculate->setObjectName(QString::fromUtf8("Btn_Calculate"));
        Btn_Calculate->setGeometry(QRect(530, 450, 371, 31));
        Btn_Calculate->setFont(font);
        Btn_Calculate->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"  min-width: 100px;\n"
"  font-family: inherit;\n"
"  appearance: none;\n"
"  border: 0;\n"
"  border-radius: 5px;\n"
"  background: #4676d7;\n"
"  color: #fff;\n"
"  padding: 8px 16px;\n"
"  font-size: 1rem;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: #1d49aa;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 4px #cbd6ee;\n"
"}QPushButton\n"
"{\n"
"  min-width: 100px;\n"
"  font-family: inherit;\n"
"  appearance: none;\n"
"  border: 0;\n"
"  border-radius: 5px;\n"
"  background: #4676d7;\n"
"  color: #fff;\n"
"  padding: 8px 16px;\n"
"  font-size: 1rem;\n"
"  cursor: pointer;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"  background: #1d49aa;\n"
"}\n"
"\n"
"QPushButton:focus {\n"
"  outline: none;\n"
"  box-shadow: 0 0 0 4px #cbd6ee;\n"
"}"));
        LE_Add_Edge_2_Weight = new QLineEdit(centralwidget);
        LE_Add_Edge_2_Weight->setObjectName(QString::fromUtf8("LE_Add_Edge_2_Weight"));
        LE_Add_Edge_2_Weight->setGeometry(QRect(730, 310, 31, 31));
        LE_Add_Edge_2_Weight->setFont(font1);
        LE_Add_Edge_2_Weight->setStyleSheet(QString::fromUtf8("color: rgb(71, 98, 68);\n"
"background-color:  rgb(175, 184, 255);"));
        LE_Add_Edge_2_Weight->setFrame(true);
        LE_Add_Edge_2_Weight->setAlignment(Qt::AlignCenter);
        LE_Add_Edge_2_Weight->setDragEnabled(false);
        L_Add_Edge_1_Weight_2 = new QLabel(centralwidget);
        L_Add_Edge_1_Weight_2->setObjectName(QString::fromUtf8("L_Add_Edge_1_Weight_2"));
        L_Add_Edge_1_Weight_2->setGeometry(QRect(550, 310, 81, 31));
        L_Add_Edge_1_Weight_2->setFont(font1);
        L_Add_Edge_1_Weight_2->setStyleSheet(QString::fromUtf8("color: #4676d7;"));
        LE_Add_Edge_2_Top_2 = new QLineEdit(centralwidget);
        LE_Add_Edge_2_Top_2->setObjectName(QString::fromUtf8("LE_Add_Edge_2_Top_2"));
        LE_Add_Edge_2_Top_2->setGeometry(QRect(730, 270, 31, 31));
        LE_Add_Edge_2_Top_2->setFont(font1);
        LE_Add_Edge_2_Top_2->setStyleSheet(QString::fromUtf8("color: rgb(71, 98, 68);\n"
"background-color:  rgb(150, 184, 255);"));
        LE_Add_Edge_2_Top_2->setFrame(true);
        LE_Add_Edge_2_Top_2->setAlignment(Qt::AlignCenter);
        LE_Add_Edge_2_Top_2->setDragEnabled(false);
        L_Add_Edge_1_Top_3 = new QLabel(centralwidget);
        L_Add_Edge_1_Top_3->setObjectName(QString::fromUtf8("L_Add_Edge_1_Top_3"));
        L_Add_Edge_1_Top_3->setGeometry(QRect(550, 270, 161, 31));
        L_Add_Edge_1_Top_3->setFont(font1);
        L_Add_Edge_1_Top_3->setStyleSheet(QString::fromUtf8("color: #4676d7;"));
        L_Add_Edge_1_Top_4 = new QLabel(centralwidget);
        L_Add_Edge_1_Top_4->setObjectName(QString::fromUtf8("L_Add_Edge_1_Top_4"));
        L_Add_Edge_1_Top_4->setGeometry(QRect(550, 230, 161, 31));
        L_Add_Edge_1_Top_4->setFont(font1);
        L_Add_Edge_1_Top_4->setStyleSheet(QString::fromUtf8("color: #4676d7;"));
        LE_Add_Edge_2_Top_1 = new QLineEdit(centralwidget);
        LE_Add_Edge_2_Top_1->setObjectName(QString::fromUtf8("LE_Add_Edge_2_Top_1"));
        LE_Add_Edge_2_Top_1->setGeometry(QRect(730, 230, 31, 31));
        LE_Add_Edge_2_Top_1->setFont(font1);
        LE_Add_Edge_2_Top_1->setStyleSheet(QString::fromUtf8("color: rgb(71, 98, 68);\n"
"background-color: #4676d7;"));
        LE_Add_Edge_2_Top_1->setFrame(true);
        LE_Add_Edge_2_Top_1->setAlignment(Qt::AlignCenter);
        LE_Add_Edge_2_Top_1->setDragEnabled(false);
        TSP->setCentralWidget(centralwidget);

        retranslateUi(TSP);

        QMetaObject::connectSlotsByName(TSP);
    } // setupUi

    void retranslateUi(QMainWindow *TSP)
    {
        TSP->setWindowTitle(QCoreApplication::translate("TSP", "TSP", nullptr));
        Btn_Add_Top->setText(QCoreApplication::translate("TSP", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        Btn_Del_Top->setText(QCoreApplication::translate("TSP", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\262\320\265\321\200\321\210\320\270\320\275\321\203", nullptr));
        Btn_Add_Edge_1->setText(QCoreApplication::translate("TSP", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\262\321\217\320\267\321\214  (- >)", nullptr));
        Btn_Add_Edge_2->setText(QCoreApplication::translate("TSP", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\320\262\321\217\320\267\321\214  (< - >)", nullptr));
        LE_Del_Top_index->setText(QString());
        L_Add_Edge_1_Top_1->setText(QCoreApplication::translate("TSP", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        L_Add_Edge_1_Top_2->setText(QCoreApplication::translate("TSP", "\320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        LE_Add_Edge_1_Top_1->setText(QString());
        L_Add_Edge_1_Weight->setText(QCoreApplication::translate("TSP", "\320\222\320\265\321\201 \321\201\320\262\321\217\320\267\320\270", nullptr));
        LE_Add_Edge_1_Weight->setText(QString());
        L_Result->setText(QString());
        L_Path_length->setText(QString());
        L_Errors->setText(QString());
        L_Clear->setText(QCoreApplication::translate("TSP", "Clear", nullptr));
        help->setText(QCoreApplication::translate("TSP", "HELP", nullptr));
        L_Add_Edge_2_Weight->setText(QCoreApplication::translate("TSP", "\320\222\320\265\321\201 \321\201\320\262\321\217\320\267\320\270", nullptr));
        Btn_Calculate->setText(QCoreApplication::translate("TSP", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\276\320\277\321\202\320\270\320\274\320\260\320\273\321\214\320\275\321\213\320\271 \320\277\321\203\321\202\321\214", nullptr));
        LE_Add_Edge_2_Weight->setText(QString());
        L_Add_Edge_1_Weight_2->setText(QCoreApplication::translate("TSP", "\320\222\320\265\321\201 \321\201\320\262\321\217\320\267\320\270", nullptr));
        L_Add_Edge_1_Top_3->setText(QCoreApplication::translate("TSP", "\320\232\320\276\320\275\320\265\321\207\320\275\320\260\321\217 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        L_Add_Edge_1_Top_4->setText(QCoreApplication::translate("TSP", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\320\260\321\217 \320\262\320\265\321\200\321\210\320\270\320\275\320\260", nullptr));
        LE_Add_Edge_2_Top_1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TSP: public Ui_TSP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSP_H
