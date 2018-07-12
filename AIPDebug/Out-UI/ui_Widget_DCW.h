/********************************************************************************
** Form generated from reading UI file 'Widget_DCW.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_DCW_H
#define UI_WIDGET_DCW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_DCW
{
public:
    QLabel *label_11;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout;
    QLineEdit *dcvEdit5;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *dcvEdit4;
    QLineEdit *dcvEdit3;
    QLineEdit *dcvEdit2;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *dcvEdit1;

    void setupUi(QWidget *Widget_DCW)
    {
        if (Widget_DCW->objectName().isEmpty())
            Widget_DCW->setObjectName(QString::fromUtf8("Widget_DCW"));
        Widget_DCW->resize(721, 580);
        label_11 = new QLabel(Widget_DCW);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(100, 170, 461, 201));
        label_11->setFrameShape(QFrame::Panel);
        gridLayoutWidget_2 = new QWidget(Widget_DCW);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(120, 180, 431, 181));
        gridLayout = new QGridLayout(gridLayoutWidget_2);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        dcvEdit5 = new QLineEdit(gridLayoutWidget_2);
        dcvEdit5->setObjectName(QString::fromUtf8("dcvEdit5"));
        dcvEdit5->setFocusPolicy(Qt::ClickFocus);
        dcvEdit5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dcvEdit5, 1, 4, 1, 1);

        label_2 = new QLabel(gridLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_3, 0, 3, 1, 1);

        dcvEdit4 = new QLineEdit(gridLayoutWidget_2);
        dcvEdit4->setObjectName(QString::fromUtf8("dcvEdit4"));
        dcvEdit4->setFocusPolicy(Qt::ClickFocus);
        dcvEdit4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dcvEdit4, 0, 4, 1, 1);

        dcvEdit3 = new QLineEdit(gridLayoutWidget_2);
        dcvEdit3->setObjectName(QString::fromUtf8("dcvEdit3"));
        dcvEdit3->setFocusPolicy(Qt::ClickFocus);
        dcvEdit3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dcvEdit3, 2, 1, 1, 1);

        dcvEdit2 = new QLineEdit(gridLayoutWidget_2);
        dcvEdit2->setObjectName(QString::fromUtf8("dcvEdit2"));
        dcvEdit2->setFocusPolicy(Qt::ClickFocus);
        dcvEdit2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dcvEdit2, 1, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(30, 0));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        dcvEdit1 = new QLineEdit(gridLayoutWidget_2);
        dcvEdit1->setObjectName(QString::fromUtf8("dcvEdit1"));
        dcvEdit1->setFocusPolicy(Qt::ClickFocus);
        dcvEdit1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(dcvEdit1, 0, 1, 1, 1);


        retranslateUi(Widget_DCW);

        QMetaObject::connectSlotsByName(Widget_DCW);
    } // setupUi

    void retranslateUi(QWidget *Widget_DCW)
    {
        Widget_DCW->setWindowTitle(QApplication::translate("Widget_DCW", "Form", 0, QApplication::UnicodeUTF8));
        label_11->setText(QString());
        label_2->setText(QApplication::translate("Widget_DCW", "\347\224\265\345\216\213V", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget_DCW", "\347\224\265\346\265\201\344\270\212\351\231\220mA", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget_DCW", "\347\224\265\346\265\201\344\270\213\351\231\220mA", 0, QApplication::UnicodeUTF8));
        label_7->setText(QString());
        label_5->setText(QApplication::translate("Widget_DCW", "ACR", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Widget_DCW", "\346\227\266\351\227\264s", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget_DCW: public Ui_Widget_DCW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_DCW_H
