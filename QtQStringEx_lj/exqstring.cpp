#include "exqstring.h"
#include "ui_exqstring.h"

ExQString::ExQString(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ExQString)
{
    ui->setupUi(this);
    setWindowTitle(QObject::tr("2/8/10/16进制互相转化"));
}

ExQString::~ExQString()
{
    delete ui;
}

void ExQString::on_btnResult_clicked()
{
    float a = ui->editA->text().toFloat();
    float b = ui->editB->text().toFloat();
    float m_val = a * b;
    QString str = QString::number(static_cast<double>(m_val), 'f', 8);
    ui->editC->setText(str);
}


void ExQString::on_btn2_clicked()
{
    QString str = ui->edit2->text();
    bool ok;
    int val = str.toInt(&ok, 2);      //获取二进制

    QString tempStr;
    ui->edit8->setText(tempStr.setNum(val, 8));   //显示八进制
    ui->edit10->setText(tempStr.setNum(val, 10));   //显示十进制
    ui->edit16->setText(tempStr.setNum(val, 16));   //显示十进制
}


void ExQString::on_btn8_clicked()
{
    QString str = ui->edit8->text();
    bool ok;
    int val = str.toInt(&ok, 8);

    QString tempStr;
    ui->edit2->setText(tempStr.setNum(val,2));  // 显示二进制
    ui->edit10->setText(tempStr.setNum(val,10));
    ui->edit16->setText(tempStr.setNum(val, 16));

}


void ExQString::on_btn10_clicked()
{
    QString str = ui->edit10->text();
    bool ok;
    int val = str.toInt(&ok,10);

    QString tempStr;
    ui->edit2->setText(tempStr.setNum(val, 2));
    ui->edit8->setText(tempStr.setNum(val, 8));
    ui->edit16->setText(tempStr.setNum(val, 16));
}

