#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QMenu* pmnuFile = new QMenu("&File");


    QAction* pactSave = new QAction("file save action", pmnuFile);
    pactSave->setText("&Save");
    pactSave->setShortcut(QKeySequence("CTRL+S"));
    pactSave->setToolTip("Save Document");
    pactSave->setStatusTip("Save the file to disk");
    pactSave->setWhatsThis("Save the file to disk");
//    pactSave->setIcon(QPixmap(img4_xpm));
    pmnuFile->addAction(pactSave);

    connect(pactSave, SIGNAL(triggered()),qApp, SLOT(slotquit1()));
 //   QToolBar* ptb = new QToolBar("Linker ToolBar");
 //   ptb->addAction(pactSave);
  //          QMenu*   pmnu   = new QMenu("&Menu");

//              pmnu->addAction("&About Qt",
//                              &app,
//                              SLOT(aboutQt()),
//                              Qt::CTRL + Qt::Key_Q
//                             );

              //pmnu->addSeparator();

/*              QAction* pCheckableAction = pmnu->addAction("&CheckableItem");
              pCheckableAction->setCheckable(true);
              pCheckableAction->setChecked(true);

//              pmnu->addAction(QPixmap(img4_xpm), "&IconItem");

              QMenu* pmnuSubMenu = new QMenu("&SubMenu", pmnu);
              pmnu->addMenu(pmnuSubMenu);
              pmnuSubMenu->addAction("&Test");

              QAction* pDisabledAction = pmnu->addAction("&DisabledItem");
              pDisabledAction->setEnabled(false);

              pmnu->addSeparator();
*/

    //          QAction* openAction = new QAction("&Open", 0);

    //              connect(openAction, SIGNAL(triggered()), this, SLOT(slotquit1()));

    //          pmnu->addAction(openAction);
              //pmnu->addAction("&Exit", this, SLOT(slotquit()));

    ui->menuBar->addMenu(pmnuFile);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::slotquit1()
{

    exit(0);

}
