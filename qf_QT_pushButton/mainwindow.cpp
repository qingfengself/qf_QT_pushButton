#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qf_qt_pushbutton.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init_my_button();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_my_button(void)
{
    qf_QT_pushButton* test_btn = new qf_QT_pushButton(this);
    test_btn->qf_setSize(100, 20);
    test_btn->qf_setPosition(20, 20);
    test_btn->qf_setText("hello World");
    test_btn->qf_setBackgroundColor("red");
    test_btn->qf_setTextColor("blue");
    test_btn->show();
}
