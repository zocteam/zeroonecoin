/********************************************************************************
** Form generated from reading UI file 'helpmessagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPMESSAGEDIALOG_H
#define UI_HELPMESSAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpMessageDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayoutLogo;
    QLabel *aboutLogo;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *helpMessage;
    QLabel *aboutMessage;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *okButton;

    void setupUi(QDialog *HelpMessageDialog)
    {
        if (HelpMessageDialog->objectName().isEmpty())
            HelpMessageDialog->setObjectName(QStringLiteral("HelpMessageDialog"));
        HelpMessageDialog->resize(780, 500);
        HelpMessageDialog->setMaximumSize(QSize(16777215, 500));
        HelpMessageDialog->setMouseTracking(false);
        HelpMessageDialog->setWindowTitle(QStringLiteral("ZeroOne Core - Command-line options"));
        HelpMessageDialog->setAutoFillBackground(false);
        HelpMessageDialog->setStyleSheet(QStringLiteral(""));
        horizontalLayout_2 = new QHBoxLayout(HelpMessageDialog);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, 12, 12, 12);
        verticalLayoutLogo = new QVBoxLayout();
        verticalLayoutLogo->setObjectName(QStringLiteral("verticalLayoutLogo"));
        verticalLayoutLogo->setContentsMargins(0, 0, 0, -1);
        aboutLogo = new QLabel(HelpMessageDialog);
        aboutLogo->setObjectName(QStringLiteral("aboutLogo"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(aboutLogo->sizePolicy().hasHeightForWidth());
        aboutLogo->setSizePolicy(sizePolicy);
        aboutLogo->setMinimumSize(QSize(96, 464));
        aboutLogo->setMaximumSize(QSize(96, 564));
        aboutLogo->setBaseSize(QSize(96, 564));
        aboutLogo->setAutoFillBackground(false);
        aboutLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/drkblue/about")));
        aboutLogo->setScaledContents(false);
        aboutLogo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        verticalLayoutLogo->addWidget(aboutLogo);


        horizontalLayout_2->addLayout(verticalLayoutLogo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(HelpMessageDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 630, 413));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        helpMessage = new QTextEdit(scrollAreaWidgetContents);
        helpMessage->setObjectName(QStringLiteral("helpMessage"));
        helpMessage->setReadOnly(true);

        verticalLayout_2->addWidget(helpMessage);

        aboutMessage = new QLabel(scrollAreaWidgetContents);
        aboutMessage->setObjectName(QStringLiteral("aboutMessage"));
        aboutMessage->setCursor(QCursor(Qt::IBeamCursor));
        aboutMessage->setTextFormat(Qt::PlainText);
        aboutMessage->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        aboutMessage->setOpenExternalLinks(true);
        aboutMessage->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(aboutMessage);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(4, 4, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        okButton = new QDialogButtonBox(HelpMessageDialog);
        okButton->setObjectName(QStringLiteral("okButton"));
        okButton->setOrientation(Qt::Horizontal);
        okButton->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(okButton);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(HelpMessageDialog);
        QObject::connect(okButton, SIGNAL(accepted()), HelpMessageDialog, SLOT(accept()));
        QObject::connect(okButton, SIGNAL(rejected()), HelpMessageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(HelpMessageDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpMessageDialog)
    {
        Q_UNUSED(HelpMessageDialog);
    } // retranslateUi

};

namespace Ui {
    class HelpMessageDialog: public Ui_HelpMessageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPMESSAGEDIALOG_H
