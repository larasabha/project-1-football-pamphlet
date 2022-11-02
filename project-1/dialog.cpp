#include "dialog.h"
#include "ui_dialog.h"
#include "desplayteam.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    desplayTeam desplayteam;
    desplayteam.setModal(true);
    desplayteam.exec();
}

void Dialog::on_pushButton_2_clicked() 
{
    QMessageBox::information(this, "Email Box", "Contact us at helpdesk@yahoo.com");
}

void Dialog::on_pushButton_3_clicked() 
{
    QMessageBox::warning(this, "Phone Box", "Contact us at (714)-899-9546");
}

