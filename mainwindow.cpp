#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the valueChanged signals of the spinboxes to the updateTotalPrice slot
    connect(ui->spinBox, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));
    connect(ui->spinBox_2, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));
    connect(ui->spinBox_3, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));
    connect(ui->spinBox_4, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));
    connect(ui->spinBox_5, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));
    connect(ui->spinBox_6, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));
    connect(ui->spinBox_7, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));
    connect(ui->spinBox_8, SIGNAL(valueChanged(int)), this, SLOT(updateTotalPrice()));

    // Set the current prices of the products
    ACEITE_PRICE = 5.96;
    PAN_PRICE = 2.13;
    MANGO_PRICE = 3.55;
    ALIOLI_PRICE = 3.29;
    PECHUGA_POLLO_PRICE = 2.34;
    ZUMO_NARANJA_PRICE = 1.96;
    TOMATES_ROMA_PRICE = 0.12;
    LECHE_DESNATADA_PRICE = 2.27;

    // Call the updateTotalPrice function to set the initial total price
    updateTotalPrice();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTotalPrice()
{
    double totalPrice = 0;

    // Calculate the total price by multiplying the value of the spinbox to the respective price of that product
    totalPrice += ui->spinBox->value() * ACEITE_PRICE;
    totalPrice += ui->spinBox_2->value() * PAN_PRICE;
    totalPrice += ui->spinBox_3->value() * MANGO_PRICE;
    totalPrice += ui->spinBox_4->value() * ALIOLI_PRICE;
    totalPrice += ui->spinBox_5->value() * PECHUGA_POLLO_PRICE;
    totalPrice += ui->spinBox_6->value() * ZUMO_NARANJA_PRICE;
    totalPrice += ui->spinBox_7->value() * TOMATES_ROMA_PRICE;
    totalPrice += ui->spinBox_8->value() * LECHE_DESNATADA_PRICE;


    // Update the display of the totalPriceLCD widget
    ui->totalPriceLabel->display(totalPrice);
}
