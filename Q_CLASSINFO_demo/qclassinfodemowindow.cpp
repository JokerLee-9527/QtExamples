#include "qclassinfodemowindow.h"
#include "ui_qclassinfodemowindow.h"

#include <QObject>
#include <QMetaObject>
#include <QMetaClassInfo>


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

void QClassInfoDemoWindow::on_classInfoPushButton_clicked()
{


    const QMetaObject* meta = this->metaObject();
    const int classInfoCount = meta->classInfoCount();


    QString editText = QString("Q_CLASSINFO的数量:%1 \n").arg(classInfoCount);
    for (int i = 0; i < classInfoCount; i++) {
        QMetaClassInfo info = meta->classInfo(i);
        editText.append("name:").append(info.name())\
            .append(" vlaue:").append(info.value()).append("\n");

    }

    ui->classInfoTextEdit->setText(editText);
}

