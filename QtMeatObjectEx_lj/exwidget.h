#ifndef EXWIDGET_H
#define EXWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class ExWidget;
}
QT_END_NAMESPACE

class ExWidget : public QWidget
{
    Q_OBJECT

    Q_CLASSINFO("author", "JokerLee")

public:
    ExWidget(QWidget *parent = nullptr);
    ~ExWidget();

private:
    Ui::ExWidget *ui;
};
#endif // EXWIDGET_H
