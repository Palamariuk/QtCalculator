#include "mainwindow.h"
#include "ui_mainwindow.h"

double firstNum;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_1,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_2,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_3,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_4,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_5,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_6,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_7,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_8,SIGNAL(clicked()), this, SLOT(clickDigits()));
    connect(ui->pushButton_9,SIGNAL(clicked()), this, SLOT(clickDigits()));

    connect(ui->pushButton_PC,SIGNAL(clicked()), this, SLOT(unaryOperations()));
    connect(ui->pushButton_PM,SIGNAL(clicked()), this, SLOT(unaryOperations()));

    connect(ui->pushButton_PL,SIGNAL(clicked()), this, SLOT(binaryOperations()));
    connect(ui->pushButton_MIN,SIGNAL(clicked()), this, SLOT(binaryOperations()));
    connect(ui->pushButton_MULT,SIGNAL(clicked()), this, SLOT(binaryOperations()));
    connect(ui->pushButton_DIV,SIGNAL(clicked()), this, SLOT(binaryOperations()));

    connect(ui->pushButton_EQ,SIGNAL(clicked()), this, SLOT(on_pushButton_EQ_clicked()));

    connect(ui->pushButton_C, SIGNAL(clicked()), this, SLOT(clearOperations()));
    connect(ui->pushButton_B, SIGNAL(clicked()), this, SLOT(clearOperations()));

    ui->pushButton_PL->setCheckable(true);
    ui->pushButton_MIN->setCheckable(true);
    ui->pushButton_MULT->setCheckable(true);
    ui->pushButton_DIV->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clickDigits(){

    QPushButton *button = (QPushButton *)sender();

    double result;
    QString text;
    if(ui->result->text().contains(".") && button->text()=="0") {
        text = ui->result->text()+button->text();
    } else {
    result = (ui->result->text()+button->text()).toDouble();
    text = QString::number(result, 'g', 15);
    }

    ui->result->setText(text);

}

void MainWindow::on_pushButton_D_clicked(){
    if(!(ui->result->text().contains('.')))
        ui->result->setText(ui->result->text()+'.');
}

void MainWindow::unaryOperations(){
    QPushButton *button = (QPushButton *)sender();
    double result;
    result = (ui->result->text()).toDouble();
    QString text;

    if(button->text()=="+/-"){
        result*=-1;
    } else if(button->text()=="%"){
        result*=0.01;
    }

    text = QString::number(result, 'g', 15);
    ui->result->setText(text);
}

void MainWindow::binaryOperations(){

    QPushButton *button = (QPushButton *)sender();
    firstNum = (ui->result->text()).toDouble();
    ui->result->setText("");
    button->setChecked(true);
}

void MainWindow::clearOperations(){
    QPushButton *button = (QPushButton *)sender();
    if(button->text() == "C"){
        ui->result->setText("0");
    } else if(button->text() == "<"){
        QString label = ui->result->text();
        label = label.left(label.size()-1);
        ui->result->setText(label);
    }
}
void MainWindow::on_pushButton_EQ_clicked()
{

    double secondNum, result;
    QString label;
    secondNum = (ui->result->text()).toDouble();

    if(ui->pushButton_PL->isChecked()){

        result = firstNum + secondNum;
        label = QString::number(result, 'g', 15);
        ui->result->setText(label);
        ui->pushButton_PL->setChecked(false);

    } else if(ui->pushButton_MIN->isChecked()){

        result = firstNum - secondNum;
        label = QString::number(result, 'g', 15);
        ui->result->setText(label);
        ui->pushButton_MIN->setChecked(false);

    } else if(ui->pushButton_MULT->isChecked()){

        result = firstNum * secondNum;
        label = QString::number(result, 'g', 15);
        ui->result->setText(label);
        ui->pushButton_MULT->setChecked(false);

    } else if(ui->pushButton_DIV->isChecked()){

        if(secondNum == 0){
            QMessageBox::warning(this, "Division by 0!", "Error: Devision by 0!");
            ui->result->setText("0");
        } else {
            result = firstNum / secondNum;
            label = QString::number(result, 'g', 15);
            ui->result->setText(label);
            ui->pushButton_DIV->setChecked(false);
        }


    }
}
