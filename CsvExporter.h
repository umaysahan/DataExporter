#ifndef CSVEXPORTER_H
#define CSVEXPORTER_H
#include <QFile>
#include "DataExporter.h"


class CsvExporter : public DataExporter
{
public:
    CsvExporter();
    void Export(QList<QStringList> data) override{

         QFile file("DataExport2Csv.csv");
            file.open(QIODevice::Append | QIODevice::Text);

            // Write data to file
            QTextStream stream(&file);
            QString separator(",");
            for (int i = 0; i < data.size(); ++i)
            {
                stream << data.at(i).join(separator) << "\n";
            }

            stream.flush();
            file.close();
            qDebug() << "The book has been saved succesfully.";


    }
};

#endif // CSVEXPORTER_H
