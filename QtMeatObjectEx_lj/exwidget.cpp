#include "exwidget.h"
#include "ui_exwidget.h"

ExWidget::ExWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ExWidget)
{
    ui->setupUi(this);

    m_boy = new ExPerson("张三");
    m_boy->setProperty("score", 90);
    m_boy->setProperty("age", 20);
    m_boy->setProperty("sex", "Boy");           //动态属性
    connect(m_boy, &ExPerson::ageChanged, this, &ExWidget::onAgeChange);

    m_girl = new ExPerson("张丽");
    m_girl->setProperty("score", 80);
    m_girl->setProperty("age", 10);
    m_girl->setProperty("sex", "Gril");         //动态属性
    connect(m_girl, &ExPerson::ageChanged, this, &ExWidget::onAgeChange);

    ui->spinBoy->setProperty("isBoy", true);    //动态属性
    ui->spinGril->setProperty("isBoy", false);



    connect(ui->spinGril, SIGNAL(valueChanged(int)), this, SLOT(onSpinValChange(int)));
    connect(ui->spinBoy,  SIGNAL(valueChanged(int)), this, SLOT(onSpinValChange(int)));

    connect(ui->btnBoyAdd, SIGNAL(clicked()), this, SLOT(onBtnBoyInc()));
    connect(ui->btnGrilAdd, SIGNAL(clicked()), this, SLOT(onBtnGrilInc()));
    connect(ui->btnMetaObject, SIGNAL(clicked()), this, SLOT(onClassInfo()));
    connect(ui->btnClean, SIGNAL(clicked()), this, SLOT(onBtnClear()));

    setWindowTitle(QObject::tr("元对象MetaObject和(含动态)属性Propert的用法"));
}

ExWidget::~ExWidget()
{
    delete ui;
}

void ExWidget::onAgeChange(int val)
{

}

void ExWidget::onSpinValChange(int val)
{

}

void ExWidget::onBtnClear() {
    ui->btnClean->text().clear();
}

void ExWidget::onBtnBoyInc()
{

}

void ExWidget::onBtnGrilInc()
{

}

void ExWidget::onClassInfo()
{

}
