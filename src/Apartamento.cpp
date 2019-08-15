#include "Apartamento.h"
#include <iostream>
#include "Imovel.h"
using namespace std;
Apartamento::Apartamento()
{

}
 //get
string Apartamento::getPosicao()
{
    return posicao;
}
int Apartamento::getNumQuatos()
{
    return numQuatos;
}
double Apartamento::getValorCondominio()
{
    return valorCondominio;
}
int Apartamento::getVagasGaragem()
{
    return vagasGaragem;
}
double Apartamento::getArea()
{
    return area;
}
//set
void Apartamento::getPosicao(string posicao)
{
    this->posicao=posicao;
}
void Apartamento::getNumQuatos(int numQuatos)
{
    this->numQuatos=numQuatos;
}
void Apartamento::getValorCondominio(double valorCondominio)
{
    this->valorCondominio=valorCondominio;
}
void Apartamento::getVagasGaragem(int vagasGaragem)
{
    this->vagasGaragem=vagasGaragem;
}
void Apartamento::getArea(double area)
{
    this->area=area;
}
