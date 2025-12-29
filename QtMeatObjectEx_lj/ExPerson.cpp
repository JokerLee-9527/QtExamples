#include "ExPerson.h"

//构造函数
ExPerson::ExPerson(QString name, QObject *parent)
{
    this->m_name = name;
}

int ExPerson::getAge()
{
    return this->m_age;

}

void ExPerson::setAge(int value)
{
    this->m_age = value;
    // 发射信号
    emit ageChanged(this->m_age);
}

void ExPerson::incAge()
{
    this->m_age++;
    emit ageChanged(this->m_age);
}


