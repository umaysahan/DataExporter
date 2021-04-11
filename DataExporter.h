#ifndef DATAEXPORTER_H
#define DATAEXPORTER_H
#include <QDebug>


class DataExporter
{
protected:
    QString path;

public:
    DataExporter();
    void setPath(QString a){
        path=a;
    }
    QString getPath()
    {
        return path;
    }
    virtual void Export( QList<QStringList> data)=0;
};


#endif // DATAEXPORTER_H
