#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


            QMenu*   pmnu   = new QMenu("&Menu");

//              pmnu->addAction("&About Qt",
//                              &app,
//                              SLOT(aboutQt()),
//                              Qt::CTRL + Qt::Key_Q
//                             );

              pmnu->addSeparator();

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
              pmnu->addAction("&Exit", this, SLOT(slotquit()));

    ui->setupUi(this);
    ui->menuBar->addMenu(pmnu);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::slotquit()
{
    close();
    exit(0);

}
