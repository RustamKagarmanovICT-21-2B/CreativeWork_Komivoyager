#include "tsp.h"
#include "top.h"
#include "edge.h"

#include <QApplication>

QVector <TOP> tops;
QVector <EDGE> edges;
//Создание массива
QVector <QVector<int>> map;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TSP w;
    w.setWindowTitle("Window");
    w.show();
    return a.exec();

}
