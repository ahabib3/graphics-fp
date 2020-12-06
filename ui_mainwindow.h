/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
//#include "Canvas2D.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionQuit;
    QAction *actionRevert;
    QAction *actionCopy3Dto2D;
    QAction *actionClear;

    QWidget *centralWidget;
    QGridLayout *gridLayout_10;
    QTabWidget *tabWidget;
    QGridLayout *gridLayout_11;
    QScrollArea *scrollArea;
    QWidget *tab3D;
    QGridLayout *gridLayout_12;
    QWidget *canvas3D;

    QDockWidget *shapesDock;
    QWidget *shapesDockContents;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *textureType;
    QVBoxLayout *verticalLayout_8;
    QRadioButton *texture1;
    QRadioButton *texture2;
    QRadioButton *texture3;
    QRadioButton *texture4;
    QRadioButton *shapeTypeTorus;
    QRadioButton *shapeTypeSpecial1;
    QRadioButton *shapeTypeSpecial2;
    QGroupBox *shapeParameters;
    QGridLayout *gridLayout_4;
    QLabel *shapeParameterLabel1;
    QLabel *shapeParameterLabel2;
    QLabel *shapeParameterLabel3;
    QSlider *shapeParameterSlider1;
    QSlider *shapeParameterSlider2;
    QSlider *shapeParameterSlider3;
    QLineEdit *shapeParameterTextbox1;
    QLineEdit *shapeParameterTextbox2;
    QLineEdit *shapeParameterTextbox3;
    QCheckBox *useLightingCheckbox;
    QCheckBox *drawWireframeCheckbox;
    QCheckBox *drawNormalsCheckbox;
    QCheckBox *intersectSphereCheckbox;
    QCheckBox *intersectHoleCheckbox;
    QPushButton *renderClothButton;
    QWidget *shapesDockEmptySpace;

    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuToolbars;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 3112);
        MainWindow->setDockNestingEnabled(true);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks|QMainWindow::VerticalTabs);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionRevert = new QAction(MainWindow);
        actionRevert->setObjectName(QString::fromUtf8("actionRevert"));
        actionRevert->setEnabled(true);
        actionCopy3Dto2D = new QAction(MainWindow);
        actionCopy3Dto2D->setObjectName(QString::fromUtf8("actionCopy3Dto2D"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));

        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_10 = new QGridLayout(centralWidget);
        gridLayout_10->setSpacing(6);
        gridLayout_10->setContentsMargins(11, 11, 11, 11);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tab3D = new QWidget();
        tab3D->setObjectName(QString::fromUtf8("tab3D"));
        gridLayout_12 = new QGridLayout(tab3D);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        canvas3D = new QWidget(tab3D);
        canvas3D->setObjectName(QString::fromUtf8("canvas3D"));

        gridLayout_12->addWidget(canvas3D, 0, 0, 1, 1);

        tabWidget->addTab(tab3D, QString());

        gridLayout_10->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);

        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);

        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);

        shapesDock = new QDockWidget(MainWindow);
        shapesDock->setObjectName(QString::fromUtf8("shapesDock"));
        shapesDockContents = new QWidget();
        shapesDockContents->setObjectName(QString::fromUtf8("shapesDockContents"));
        verticalLayout_7 = new QVBoxLayout(shapesDockContents);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        textureType = new QGroupBox(shapesDockContents);
        textureType->setObjectName(QString::fromUtf8("shapeType"));
        verticalLayout_8 = new QVBoxLayout(textureType);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 5, -1, 5);
        texture1 = new QRadioButton(textureType);
        texture1->setObjectName(QString::fromUtf8("texture1"));
        texture1->setChecked(true);

        verticalLayout_8->addWidget(texture1);

        texture2 = new QRadioButton(textureType);
        texture2->setObjectName(QString::fromUtf8("shapeTypeCone"));

        verticalLayout_8->addWidget(texture2);

        texture3 = new QRadioButton(textureType);
        texture3->setObjectName(QString::fromUtf8("shapeTypeSphere"));

        verticalLayout_8->addWidget(texture3);

        texture4 = new QRadioButton(textureType);
        texture4->setObjectName(QString::fromUtf8("shapeTypeCylinder"));

        verticalLayout_8->addWidget(texture4);

        shapeTypeTorus = new QRadioButton(textureType);
        shapeTypeTorus->setObjectName(QString::fromUtf8("shapeTypeTorus"));

        verticalLayout_8->addWidget(shapeTypeTorus);

        shapeTypeSpecial1 = new QRadioButton(textureType);
        shapeTypeSpecial1->setObjectName(QString::fromUtf8("shapeTypeSpecial1"));

        verticalLayout_8->addWidget(shapeTypeSpecial1);

        shapeTypeSpecial2 = new QRadioButton(textureType);
        shapeTypeSpecial2->setObjectName(QString::fromUtf8("shapeTypeSpecial2"));

        verticalLayout_8->addWidget(shapeTypeSpecial2);


        verticalLayout_7->addWidget(textureType);

        shapeParameters = new QGroupBox(shapesDockContents);
        shapeParameters->setObjectName(QString::fromUtf8("shapeParameters"));
        gridLayout_4 = new QGridLayout(shapeParameters);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setVerticalSpacing(5);
        gridLayout_4->setContentsMargins(-1, 5, -1, 5);
        shapeParameterLabel1 = new QLabel(shapeParameters);
        shapeParameterLabel1->setObjectName(QString::fromUtf8("shapeParameterLabel1"));

        gridLayout_4->addWidget(shapeParameterLabel1, 0, 0, 1, 1);

        shapeParameterLabel2 = new QLabel(shapeParameters);
        shapeParameterLabel2->setObjectName(QString::fromUtf8("shapeParameterLabel2"));

        gridLayout_4->addWidget(shapeParameterLabel2, 2, 0, 1, 1);

        shapeParameterLabel3 = new QLabel(shapeParameters);
        shapeParameterLabel3->setObjectName(QString::fromUtf8("shapeParameterLabel3"));

        gridLayout_4->addWidget(shapeParameterLabel3, 4, 0, 1, 1);

        shapeParameterSlider1 = new QSlider(shapeParameters);
        shapeParameterSlider1->setObjectName(QString::fromUtf8("shapeParameterSlider1"));
        shapeParameterSlider1->setMinimumSize(QSize(100, 0));
        shapeParameterSlider1->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(shapeParameterSlider1, 0, 1, 1, 1);

        shapeParameterSlider2 = new QSlider(shapeParameters);
        shapeParameterSlider2->setObjectName(QString::fromUtf8("shapeParameterSlider2"));
        shapeParameterSlider2->setMinimumSize(QSize(100, 0));
        shapeParameterSlider2->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(shapeParameterSlider2, 2, 1, 1, 1);

        shapeParameterSlider3 = new QSlider(shapeParameters);
        shapeParameterSlider3->setObjectName(QString::fromUtf8("shapeParameterSlider3"));
        shapeParameterSlider3->setMinimumSize(QSize(100, 0));
        shapeParameterSlider3->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(shapeParameterSlider3, 4, 1, 1, 1);

        shapeParameterTextbox1 = new QLineEdit(shapeParameters);
        shapeParameterTextbox1->setObjectName(QString::fromUtf8("shapeParameterTextbox1"));
        shapeParameterTextbox1->setMinimumSize(QSize(40, 0));
        shapeParameterTextbox1->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(shapeParameterTextbox1, 0, 2, 1, 1);

        shapeParameterTextbox2 = new QLineEdit(shapeParameters);
        shapeParameterTextbox2->setObjectName(QString::fromUtf8("shapeParameterTextbox2"));
        shapeParameterTextbox2->setMinimumSize(QSize(40, 0));
        shapeParameterTextbox2->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(shapeParameterTextbox2, 2, 2, 1, 1);

        shapeParameterTextbox3 = new QLineEdit(shapeParameters);
        shapeParameterTextbox3->setObjectName(QString::fromUtf8("shapeParameterTextbox3"));
        shapeParameterTextbox3->setMinimumSize(QSize(40, 0));
        shapeParameterTextbox3->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(shapeParameterTextbox3, 4, 2, 1, 1);


        verticalLayout_7->addWidget(shapeParameters);

        useLightingCheckbox = new QCheckBox(shapesDockContents);
        useLightingCheckbox->setObjectName(QString::fromUtf8("useLightingCheckbox"));

        verticalLayout_7->addWidget(useLightingCheckbox);

        drawWireframeCheckbox = new QCheckBox(shapesDockContents);
        drawWireframeCheckbox->setObjectName(QString::fromUtf8("drawWireframeCheckbox"));

        verticalLayout_7->addWidget(drawWireframeCheckbox);

        drawNormalsCheckbox = new QCheckBox(shapesDockContents);
        drawNormalsCheckbox->setObjectName(QString::fromUtf8("drawNormalsCheckbox"));

        verticalLayout_7->addWidget(drawNormalsCheckbox);


        intersectSphereCheckbox = new QCheckBox(shapesDockContents);
        intersectSphereCheckbox->setObjectName(QString::fromUtf8("intersectSphereCheckbox"));

        verticalLayout_7->addWidget(intersectSphereCheckbox);

        intersectHoleCheckbox = new QCheckBox(shapesDockContents);
        intersectHoleCheckbox->setObjectName(QString::fromUtf8("intersectHoleCheckbox"));

        verticalLayout_7->addWidget(intersectHoleCheckbox);

        renderClothButton = new QPushButton(shapesDockContents);
        renderClothButton->setObjectName(QString::fromUtf8("renderClothButton"));
        verticalLayout_7->addWidget(renderClothButton);

        shapesDockEmptySpace = new QWidget(shapesDockContents);
        shapesDockEmptySpace->setObjectName(QString::fromUtf8("shapesDockEmptySpace"));
        sizePolicy2.setHeightForWidth(shapesDockEmptySpace->sizePolicy().hasHeightForWidth());
        shapesDockEmptySpace->setSizePolicy(sizePolicy2);

        verticalLayout_7->addWidget(shapesDockEmptySpace);

        shapesDock->setWidget(shapesDockContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, shapesDock);

        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuToolbars = new QMenu(menuBar);
        menuToolbars->setObjectName(QString::fromUtf8("menuToolbars"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuToolbars->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionRevert);
        menuFile->addAction(actionClear);
        menuFile->addAction(actionCopy3Dto2D);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(renderClothButton, SIGNAL(clicked()), MainWindow, SLOT(renderCloth()));
        QObject::connect(actionNew, SIGNAL(triggered()), MainWindow, SLOT(fileNew()));
        QObject::connect(actionCopy3Dto2D, SIGNAL(triggered()), MainWindow, SLOT(fileCopy3Dto2D()));
        QObject::connect(actionClear, SIGNAL(triggered()), MainWindow, SLOT(clearImage()));
        QObject::connect(actionRevert, SIGNAL(triggered()), MainWindow, SLOT(revertImage()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Killer Cloth", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        actionQuit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRevert->setText(QCoreApplication::translate("MainWindow", "&Revert Image", nullptr));
#if QT_CONFIG(shortcut)
        actionRevert->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy3Dto2D->setText(QCoreApplication::translate("MainWindow", "Copy &3D tab to 2D tab", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "&Clear Image", nullptr));
#if QT_CONFIG(tooltip)
        actionClear->setToolTip(QCoreApplication::translate("MainWindow", "Clear Image", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionClear->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
//        tabWidget->setTabText(tabWidget->indexOf(tab2D), QCoreApplication::translate("MainWindow", "2D", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab3D), QCoreApplication::translate("MainWindow", "3D", nullptr));

        textureType->setTitle(QCoreApplication::translate("MainWindow", "Texture Type", nullptr));

        texture1->setText(QCoreApplication::translate("MainWindow", "Texture 1", nullptr));
        texture2->setText(QCoreApplication::translate("MainWindow", "Texture 2", nullptr));
        texture3->setText(QCoreApplication::translate("MainWindow", "Texture 3", nullptr));
        texture4->setText(QCoreApplication::translate("MainWindow", "Texture 4", nullptr));

        shapeParameters->setTitle(QCoreApplication::translate("MainWindow", "Shape Parameters", nullptr));
        shapeParameterLabel1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        shapeParameterLabel2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        shapeParameterLabel3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        useLightingCheckbox->setText(QCoreApplication::translate("MainWindow", "Use lighting", nullptr));
        drawWireframeCheckbox->setText(QCoreApplication::translate("MainWindow", "Draw wireframe", nullptr));
        drawNormalsCheckbox->setText(QCoreApplication::translate("MainWindow", "Draw normals", nullptr));
        intersectHoleCheckbox->setText(QCoreApplication::translate("MainWindow", "Intersect Hole", nullptr));
        intersectSphereCheckbox->setText(QCoreApplication::translate("MainWindow", "Intersect Sphere", nullptr));
        renderClothButton->setText(QCoreApplication::translate("MainWindow", "Render Cloth!", nullptr));

        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuToolbars->setTitle(QCoreApplication::translate("MainWindow", "&Toolbars", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
