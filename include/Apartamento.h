#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include <iostream>
#include "Imovel.h"
class Apartamento: public Imovel
{
    public:
        Apartamento();
        //get
        std::string getPosicao();
        int getNumQuatos();
        double getValorCondominio();
        int getVagasGaragem();
        double getArea();
        //set
        void getPosicao(std::string posicao);
        void getNumQuatos(int numQuatos);
        void getValorCondominio(double valorCondominio);
        void getVagasGaragem(int vagasGaragem);
        void getArea(double area);

    protected:

    private:
        std::string posicao;
        int numQuatos;
        double valorCondominio;
        int vagasGaragem;
        double area;
};

#endif // APARTAMENTO_H
