#ifndef WIDGET_LVS_H
#define WIDGET_LVS_H

#include <QWidget>
#include <QComboBox>
#include <QTableWidgetItem>
#include <QCheckBox>
#include <QDebug>
#include <QTableWidgetItem>
#include <QLabel>
#include "linux_can.h"
#include <QDockWidget>
#include <QGridLayout>
#include <QDoubleSpinBox>

namespace Ui {
class Widget_LVS;
}

class Widget_LVS : public QWidget
{
    Q_OBJECT
public:
    explicit Widget_LVS(QWidget *parent = 0);
    ~Widget_LVS();
    QStringList Copy_LVS_List;
    void Pub_Conf_Set_LVS(QString, int);
    QStringList LVS_Test_Param();

private slots:
    void on_lvsTab_cellChanged(int row,  int column);

    void on_pushButton_Volt_clicked();
    void Volt_Widget_autoquit();
    void Volt_sample();

signals:
    void canSend(can_frame frame);

private:
    Ui::Widget_LVS *ui;
    QStringList lvsturn;
    can_frame frame;

    bool  LVS_Init_Flag;
    QWidget *Volt_Widget;
    QList<QLabel*>    IO_Show_Lable;
    QLabel            *Volt_Back_Lable;
    QList<QDoubleSpinBox *> Volt_Line_Text;
    bool Volt_Sample_ONE;
    int  Volt_ONE;

    void  Pri_LVS_Init();
    void  Pri_LVS_Data_Save();
    void  Pri_LVS_Test_Parameter(QString);
    void  Pub_Conf_power_chose(int);
    void  Pri_Test_Two();
};

#endif // WIDGET_LVS_H
