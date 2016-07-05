#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QString>
#include <QDebug>

#include "myThread.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_Button_create_database_clicked();
    void on_Button_ok_clicked();
    void slotSetLabelImg(QImage);
    //void slotSetLabelOnllineImg(QImage);
    void slotSetLableCropImg(QImage);
    void on_horizontalScrollBar_sliderMoved(int);

    void on_Button_save_face_clicked();

signals:
    void signCreateDatabase(QString);
    void signOnlineTransl();
    void signSend_scale(int);
    void signSendSave();
private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
