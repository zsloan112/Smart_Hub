#include "inc/SmartHub.h"
#include "ui_SmartHub.h"

SmartHub::SmartHub(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SmartHub)
{
    ui->setupUi(this);

}

SmartHub::~SmartHub()
{
    delete ui;
}
