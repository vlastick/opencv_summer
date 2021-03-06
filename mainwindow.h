#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "myThread.h"

#include <QApplication>
#include <QMainWindow>
#include <QString>
#include <QDebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    void send_sign();
    ~MainWindow();
private slots:
    void on_Button_create_database_clicked();
    void on_Button_ok_clicked();
    void slotSetLabelImg(QImage);
    void slotSetLableCropImg(QImage);
    void on_horizontalScrollBar_sliderMoved(int);
    void slotPrintNamePeople(QString);
    void slotGetNumbPhoto(int);

    void on_Button_save_face_clicked();

    void on_Button_Find_face_clicked();

    void on_comboBox_currentIndexChanged(int index);

signals:
    void signCreateDatabase(QString);
    void signSend_scale(int);
    void signSendSave();
    void setPlayOrPause(bool flag);
    void slotWorkRecogn(bool);
    void signtrainModel(int,int);

    void stop_cam_timer();

    void end_threads();
private:
    Ui::MainWindow *ui;
    bool flag;
    int val_combobox;
    int threshold;
};



#endif // MAINWINDOW_H
