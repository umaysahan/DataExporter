#ifndef XLSEXPORTER_H
#define XLSEXPORTER_H
#include "DataExporter.h"
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <QDebug>
#include<QFile>

#include <Xlsx/Workbook.h>
#include <QTextStream>

#ifdef _WIN32
#include <windows.h>
#endif

#ifdef QT_CORE_LIB
#include <QDateTime>
#endif
using namespace SimpleXlsx;
class XlsExporter : public DataExporter
{
public:
    XlsExporter();
    void Export(QList<QStringList> data) override{
    CWorkbook book( "Incognito" );

    std::vector<ColumnWidth> ColWidth;
    ColWidth.push_back( ColumnWidth( 0, 3, 5 ) );
    CWorksheet & Sheet = book.AddSheet( "Unicode", ColWidth );

    for(auto a : data)
    {
        auto z = data[0];
        Sheet.BeginRow();
            for(auto b : a)
            {
                auto d = z[0];
                Sheet.AddCell(b.toStdString());

            }
            Sheet.EndRow();
    }

    if( book.Save( "DataExport252Excel.xlsx" ) ) {
                qDebug() << "The book has been saved successfully";
    }


}
};

#endif // XLSEXPORTER_H
