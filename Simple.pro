#
# Simple.pro
#
# QSimpleXlsxWriter https://github.com/QtExcel/QSimpleXlsxWriter
#
QT       += widgets
TARGET = Simple

CONFIG += console c++11
CONFIG -= app_bundle

DEFINES += QT_DEPRECATED_WARNINGS
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Set environment values. You may use default values.
#  SIMPLE_XLSX_WRITER_PARENTPATH = ../simplexlsx-code/
include(../QSimpleXlsxWriter/QSimpleXlsxWriter.pri)

SOURCES += \
    CsvExporter.cpp \
    DataExporter.cpp \
    Simple.cpp \
    XlsExporter.cpp \
    dialog.cpp

HEADERS += \
    CsvExporter.h \
    DataExporter.h \
    DataExporterFactory.h \
    XlsExporter.h \
    dialog.h

FORMS += \
    dialog.ui
