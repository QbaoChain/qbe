/********************************************************************************
** Form generated from reading UI file 'sendtokenpage.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDTOKENPAGE_H
#define UI_SENDTOKENPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bitcoinamountfield.h"
#include "qvalidatedlineedit.h"
#include "tokenamountfield.h"

QT_BEGIN_NAMESPACE

class Ui_SendTokenPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QGridLayout *gridLayout;
    QLabel *labelPayTo;
    QLabel *labelAmount;
    QLabel *labelGasLimit;
    QLabel *labelGasPrice;
    QLabel *labelDescription;
    QValidatedLineEdit *lineEditPayTo;
    QLineEdit *lineEditDescription;
    BitcoinAmountField *lineEditGasPrice;
    QSpinBox *lineEditGasLimit;
    TokenAmountField *lineEditAmount;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *clearButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *confirmButton;

    void setupUi(QWidget *SendTokenPage)
    {
        if (SendTokenPage->objectName().isEmpty())
            SendTokenPage->setObjectName(QStringLiteral("SendTokenPage"));
        SendTokenPage->setEnabled(true);
        SendTokenPage->resize(520, 310);
        verticalLayout = new QVBoxLayout(SendTokenPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(15);
        labelPayTo = new QLabel(SendTokenPage);
        labelPayTo->setObjectName(QStringLiteral("labelPayTo"));
        labelPayTo->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelPayTo, 0, 0, 1, 1);

        labelAmount = new QLabel(SendTokenPage);
        labelAmount->setObjectName(QStringLiteral("labelAmount"));
        labelAmount->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelAmount, 1, 0, 1, 1);

        labelGasLimit = new QLabel(SendTokenPage);
        labelGasLimit->setObjectName(QStringLiteral("labelGasLimit"));
        labelGasLimit->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelGasLimit, 3, 0, 1, 1);

        labelGasPrice = new QLabel(SendTokenPage);
        labelGasPrice->setObjectName(QStringLiteral("labelGasPrice"));
        labelGasPrice->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelGasPrice, 4, 0, 1, 1);

        labelDescription = new QLabel(SendTokenPage);
        labelDescription->setObjectName(QStringLiteral("labelDescription"));
        labelDescription->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(labelDescription, 2, 0, 1, 1);

        lineEditPayTo = new QValidatedLineEdit(SendTokenPage);
        lineEditPayTo->setObjectName(QStringLiteral("lineEditPayTo"));

        gridLayout->addWidget(lineEditPayTo, 0, 1, 1, 1);

        lineEditDescription = new QLineEdit(SendTokenPage);
        lineEditDescription->setObjectName(QStringLiteral("lineEditDescription"));

        gridLayout->addWidget(lineEditDescription, 2, 1, 1, 1);

        lineEditGasPrice = new BitcoinAmountField(SendTokenPage);
        lineEditGasPrice->setObjectName(QStringLiteral("lineEditGasPrice"));

        gridLayout->addWidget(lineEditGasPrice, 4, 1, 1, 1);

        lineEditGasLimit = new QSpinBox(SendTokenPage);
        lineEditGasLimit->setObjectName(QStringLiteral("lineEditGasLimit"));
        lineEditGasLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lineEditGasLimit, 3, 1, 1, 1);

        lineEditAmount = new TokenAmountField(SendTokenPage);
        lineEditAmount->setObjectName(QStringLiteral("lineEditAmount"));

        gridLayout->addWidget(lineEditAmount, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        clearButton = new QPushButton(SendTokenPage);
        clearButton->setObjectName(QStringLiteral("clearButton"));

        horizontalLayout->addWidget(clearButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        confirmButton = new QPushButton(SendTokenPage);
        confirmButton->setObjectName(QStringLiteral("confirmButton"));

        horizontalLayout->addWidget(confirmButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(SendTokenPage);

        QMetaObject::connectSlotsByName(SendTokenPage);
    } // setupUi

    void retranslateUi(QWidget *SendTokenPage)
    {
        SendTokenPage->setWindowTitle(QApplication::translate("SendTokenPage", "Form", nullptr));
        labelPayTo->setText(QApplication::translate("SendTokenPage", "PayTo", nullptr));
        labelAmount->setText(QApplication::translate("SendTokenPage", "Amount", nullptr));
        labelGasLimit->setText(QApplication::translate("SendTokenPage", "GasLimit", nullptr));
        labelGasPrice->setText(QApplication::translate("SendTokenPage", "GasPrice", nullptr));
        labelDescription->setText(QApplication::translate("SendTokenPage", "Description", nullptr));
        clearButton->setText(QApplication::translate("SendTokenPage", "Clear", nullptr));
        confirmButton->setText(QApplication::translate("SendTokenPage", "Confirm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendTokenPage: public Ui_SendTokenPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDTOKENPAGE_H
