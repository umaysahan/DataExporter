#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
#include <QDebug>
#include<QFile>
#include <DataExporter.h>

#include "dialog.h"

#include <QApplication>
#include <QTextStream>

#ifdef _WIN32
#include <windows.h>
#endif

#ifdef QT_CORE_LIB
#include <QDateTime>
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();


    return a.exec();
}
