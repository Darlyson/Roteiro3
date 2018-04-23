#include "Despesa.h"
#include <iostream>

Despesa::Despesa()
{
    setValor(0);
    setGasto("Nada");
}

Despesa::Despesa(double v, std::string g)
{
    setValor(v);
    setGasto(g);
}

Despesa::~Despesa()
{

}

double Despesa::getValor()
{
    return valor;
}

std::string Despesa::getGasto()
{
    return gasto;
}

void Despesa::setValor(double v)
{
    valor=v;
}

void Despesa::setGasto(std::string g)
{
    gasto=g;
}
