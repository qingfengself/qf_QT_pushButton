#include "qf_pushbutton.h"
#include "ui_qf_pushbutton.h"

qf_pushButton::qf_pushButton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::qf_pushButton)
{
    ui->setupUi(this);
}

qf_pushButton::~qf_pushButton()
{
    delete ui;
}
