#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mainwindow.ui"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateTotalPrice();

private:
    Ui::MainWindow *ui;
    double ACEITE_PRICE;
    double PAN_PRICE;
    double MANGO_PRICE;
    double ALIOLI_PRICE;
    double PECHUGA_POLLO_PRICE;
    double ZUMO_NARANJA_PRICE;
    double TOMATES_ROMA_PRICE;
    double LECHE_DESNATADA_PRICE;
};

#endif // MAINWINDOW_H
