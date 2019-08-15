#ifndef CASA_H
#define CASA_H
#include <iostream>
#include "Imovel.h"
class Casa: public Imovel
{
    public:
        Casa();
        //get
        int getNumPavimento();
        int getNumQuartos();
        double  getAreaTerreno();
        double  getAreaContruida();
        //set
        void setNumPavimento(int numPavimento);
        void setNumQuartos(int numQuartos);
        void setAreaTerreno(double  areaTerreno);
        void setAreaContruida(double  areaContruida);


    protected:

    private:
        int numPavimento;
        int numQuartos;
        double  areaTerreno;
        double  areaContruida;
};

#endif // CASA_H
