#include "dialog.h"
#include "ui_dialog.h"
#include "DataExporter.h"
#include "DataExporterFactory.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);



     QStringList header;
     header << "Name" << "Last Name" << "Age" << "Gender";
     data << header;

     QStringList person1;
     mahmut << "firstName1" << "lastName1" << "age1" << "gender1";
     data << mahmut;

     QStringList umay;
     umay << "firstName2" << "lastName2" << "age2" << "gender2";
     data << umay;

     QStringList orhun;
     orhun << "firstName3" << "lastName3" << "age3" << "gender3";
     data << orhun;

     QStringList songul;
     songul << "firstName4" << "lastName4" << "age4" << "gender4";
     data << songul;

     QStringList gokberk;
     gokberk << "firstName5" << "lastName5" << "age5" << "gender5";
     data << gokberk;

     QStringList goksu;
     goksu << "firstName6" << "lastName6 " << "age6" << "gender6";
     data << goksu;
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_CsvButton_clicked()
{
    auto DataExporter = DataExporterFactory::instance().CreateExporter(".csv");
    DataExporter->Export(data);
    qDebug() << "Book saved in csv.";
}

void Dialog::on_XlsButton_clicked()
{
    auto DataExporter = DataExporterFactory::instance().CreateExporter(".xlsx");
    DataExporter->Export(data);
    qDebug() << "Book saved in xls.";
}
