#ifndef EXQSTRING_H
#define EXQSTRING_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class ExQString;
}
QT_END_NAMESPACE

class ExQString : public QMainWindow
{
    Q_OBJECT

public:
    ExQString(QWidget *parent = nullptr);
    ~ExQString();

private slots:
    void on_btnResult_clicked();

    void on_btn2_clicked();

    void on_btn8_clicked();

    void on_btn10_clicked();

private:
    Ui::ExQString *ui;
};
#endif // EXQSTRING_H
