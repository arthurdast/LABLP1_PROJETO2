#ifndef TERRENO_H
#define TERRENO_H
#include <iostream>
#include "Imovel.h"
class Terreno: public Imovel
{
    public:
        Terreno();
        double getArea();
        void setArea(double area);

    protected:

    private:
        double area;
};

#endif // TERRENO_H
