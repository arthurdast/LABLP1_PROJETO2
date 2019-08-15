#include "Casa.h"
#include <iostream>
#include "Imovel.h"
using namespace std;

Casa::Casa()
{

}
//get
    int Casa::getNumPavimento()
    {
        return numPavimento;
    }
    int Casa::getNumQuartos()
    {
        return numQuartos;
    }
    double  Casa::getAreaTerreno()
    {
        return areaTerreno;
    }
    double  Casa::getAreaContruida()
    {
        return areaContruida;
    }
//set
    void Casa::setNumPavimento(int numPavimento)
    {
        this->numPavimento=numPavimento;
    }
    void Casa::setNumQuartos(int numQuartos)
    {
        this->numQuartos=numQuartos;
    }
    void Casa::setAreaTerreno(double  areaTerreno)
    {
        this->areaTerreno=areaTerreno;
    }
    void Casa::setAreaContruida(double  areaContruida)
    {
        this->areaContruida=areaContruida;
    }
