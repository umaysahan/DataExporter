#ifndef DATAEXPORTERFACTORY_H
#define DATAEXPORTERFACTORY_H
#include <DataExporter.h>
#include <XlsExporter.h>
#include <CsvExporter.h>

class DataExporterFactory
{
public:
    static DataExporterFactory& instance()
    {
        static DataExporterFactory exporter;
        return exporter;
    }
    DataExporter* CreateExporter(QString path)
    {
        DataExporter* m=nullptr;
        if(path.endsWith(".csv"))
        {
            m = new CsvExporter();

        }
        else if(path.endsWith(".xlsx"))
        {
            m = new XlsExporter();

        }

        if(m != nullptr)
        {
            m->setPath(path);
        }
        return m;
    }
private:

    DataExporterFactory(){};
    ~DataExporterFactory(){};
};


#endif // DATAEXPORTERFACTORY_H
