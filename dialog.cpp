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
     header << "Name" << "Surname" << "Age" << "Gender";
     data << header;

     QStringList mahmut;
     mahmut << "Mahmutawzesrxcfybunımoöpmonıbvycvyubnıöpmobuvybtbunıokmnbuvbytbınmköpobvycvybnmköpobvyctxvbhnjkmobuvycxrcvbnkmö" << "Tuncer" << "55" << "Male";
     data << mahmut;

     QStringList umay;
     umay << "Umay" << "Sahan" << "23" << "Female";
     data << umay;

     QStringList orhun;
     orhun << "Orhun" << "Kilinc" << "22" << "Male";
     data << orhun;

     QStringList songul;
     songul << "Songul" << "Sahan" << "53" << "Female";
     data << songul;

     QStringList gokberk;
     gokberk << "Gokberk" << "Ozcan" << "22" << "Male";
     data << gokberk;

     QStringList goksu;
     goksu << "Goksu" << "Karaca " << "21" << "Female";
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
