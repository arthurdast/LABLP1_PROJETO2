#include "Imovel.h"
#include <iostream>

using namespace std;

Imovel::Imovel()
{

}

//get
    int Imovel::getId()
    {
        return id;
    }
    string Imovel::getNome()
    {
        return nome;
    }
    int Imovel::getNumero()
    {
        return numero;
    }
    string Imovel::getBairro()
    {
        return bairro;
    }
    string Imovel::getCidade()
    {
        return cidade;
    }
    int Imovel::getCep()
    {
        return cep;
    }
    double Imovel::getValor()
    {
        return valor;
    }
    bool Imovel::getTipo()
    {
        return tipo;
    }
//set
    void Imovel::setId(int id)
    {
        this->id=id;
    }
    void Imovel::setNome(string nome)
    {
        this->nome=nome;
    }
    void Imovel::setNumero()
    {
        this->numero=numero;
    }
    void Imovel::setBairro(string bairro)
    {
        this->bairro=bairro;
    }
    void Imovel::setCidade(string cidade)
    {
        this->cidade=cidade;
    }
    void Imovel::setCep(int cep)
    {
        this->cep=cep;
    }
    void Imovel::setValor(double valor)
    {
        this->valor=valor;
    }
    void Imovel::setTipo(bool tipo)
    {
        this->tipo=tipo;
    }
