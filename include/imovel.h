#ifndef IMOVEL_H
#define IMOVEL_H
#include <iostream>

class Imovel
{
    public:
        Imovel();
        //Imovel(int id,std::string nome,int numero,std::string bairro,std::string cidade,int cep,double valor,bool tipo);
        //get
        int getId();
        std::string getNome();
        int getNumero();
        std::string getBairro();
        std::string getCidade();
        int getCep();
        double getValor();
        bool getTipo();
        //set
        void setId(int id);
        void setNome(std::string nome);
        void setNumero();
        void setBairro(std::string bairro);
        void setCidade(std::string cidade);
        void setCep(int cep);
        void setValor(double valor);
        void setTipo(bool tipo);


    protected:
        int id;
        std::string nome;
        int numero;
        std::string bairro;
        std::string cidade;
        int cep;
        double valor;
        bool tipo; // 0 - Aluguel  1- Venda
    private:
};

#endif // IMOVEL_H
