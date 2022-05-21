#ifndef EDGE_H
#define EDGE_H

//Класс для связи векторов
class EDGE
{
public:
    EDGE();
    EDGE(int X_from, int Y_from, int X_to, int Y_to, int Weight, int Type);

public:
    //Координаты вершин начала и конца, тип связи, вес связи
    int x_from;
    int y_from;
    int x_to;
    int y_to;
    int weight;
    int type;
};

#endif // EDGE_H
