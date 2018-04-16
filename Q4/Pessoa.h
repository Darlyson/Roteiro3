#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

class Pessoa
{
    public:
        Pessoa(std::string,std::string,int);
        Pessoa(std::string);
        void setNome(std::string);
        void setTel(std::string);
        void setIdade(int);
        int getIdade();
        std::string getNome();
        std::string getTel();
    private:
        std::string nome;
        std::string telefone;
        int idade;
};

#endif // PESSOA_H
