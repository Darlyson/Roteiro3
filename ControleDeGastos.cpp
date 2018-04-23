#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>

int i=0;
ControleDeGastos::ControleDeGastos()
{
    setDespesas();
    indice=0;
}

ControleDeGastos::~ControleDeGastos()
{
    //dtor
}

ControleDeGastos::setDespesas()
{
    Despesa despesas();
}

ControleDeGastos::setDespesas(double v, std::string nome)
{
    Despesa despesas(v,nome);
    indice++;
}
double ControleDeGastos::calculaTotalDeDespesas()
{
    int x;
    for(i;i<indice;i++)
    {
        x=x+despesas[i].getValor();
    }
    std::cout << "O valor da suas despesas e :" << x << std::endl;
    i=0;
}
bool ControleDeGastos::existeDespesaDoTipo()
{
    std::string procura;
    std::string y;
    std::cout << "Qual a despesa vc deseje procurar?" << std::endl;
    std::cin >> procura;
    std::cout << "As despesa q vc procura são:"<< std::endl;
    for(i;i<indice;i++)
    {
        if((despesas[i].getGasto()).compare(procura)==0){
           i=0;
           return true;
        }
    }
    i=0;
    return false;
}
