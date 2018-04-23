#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>

int i=0;
ControleDePagamentos::ControleDePagamentos()
{
    Pagamento pagamentos();
    indice=0;
}

ControleDePagamentos::ControleDePagamentos(double v,std::string n)
{
    Pagamento pagamentos(v,n);
    indice=0;
}

ControleDePagamentos::~ControleDePagamentos()
{
    //dtor
}

void ControleDePagamentos::setPagamentos(double v,std::string n)
{
    Pagamento pagamentos(v,n);
    indice++;
}

double ControleDePagamentos::calculaTotalDePagamentos()
{
    double x=0, y=0;
    for(i;i<indice;i++)
    {
        x=pagamentos.getValor();
        y=y+x;
    }
    return x;
}

bool ControleDePagamentos::existePagamentoParaFuncionario()
{
    std::string procura;
    std::string y;
    std::cout << "Qual a despesa vc deseje procurar?" << std::endl;
    std::cin >> procura;
    std::cout << "As despesa q vc procura são:"<< std::endl;
    for(i;i<indice;i++)
    {
        if((pagamentos.getNome()).compare(procura)==0){
           i=0;
           return true;
        }
    }
    i=0;
    return false;
}
