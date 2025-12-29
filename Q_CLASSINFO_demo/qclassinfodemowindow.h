#ifndef QCLASSINFODEMOWINDOW_H
#define QCLASSINFODEMOWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class QClassInfoDemoWindow;
}
QT_END_NAMESPACE

class QClassInfoDemoWindow : public QMainWindow
{
    Q_OBJECT

public:
    QClassInfoDemoWindow(QWidget *parent = nullptr);
    ~QClassInfoDemoWindow();

private:
    Ui::QClassInfoDemoWindow *ui;
};
#endif // QCLASSINFODEMOWINDOW_H
