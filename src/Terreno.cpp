#include "Terreno.h"
#include <iostream>
#include "Imovel.h"
using namespace std;

Terreno::Terreno()
{

}

double Terreno::getArea()
{
    return area;
}
void Terreno::setArea(double area)
{
    this->area=area;
}
