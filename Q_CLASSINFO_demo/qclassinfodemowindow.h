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
    // 使用 Q_CLASSINFO 宏定义元信息
    Q_CLASSINFO("version", "1.0.0")
    Q_CLASSINFO("author", "JokerLee")
    Q_CLASSINFO("category", "utility")

public:
    QClassInfoDemoWindow(QWidget *parent = nullptr);
    ~QClassInfoDemoWindow();

private slots:
    void on_classInfoPushButton_clicked();

private:
    Ui::QClassInfoDemoWindow *ui;
};
#endif // QCLASSINFODEMOWINDOW_H
