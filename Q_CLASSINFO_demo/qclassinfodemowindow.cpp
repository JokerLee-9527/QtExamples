#include "qclassinfodemowindow.h"
#include "ui_qclassinfodemowindow.h"

QClassInfoDemoWindow::QClassInfoDemoWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QClassInfoDemoWindow)
{
    ui->setupUi(this);
}

QClassInfoDemoWindow::~QClassInfoDemoWindow()
{
    delete ui;
}
