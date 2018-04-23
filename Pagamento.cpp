#include "Pagamento.h"
#include <iostream>
#include <string>

Pagamento::Pagamento()
{
    setValor(0);
    setNome("Vazio");
}

Pagamento::Pagamento(double v, std::string n)
{
    setValor(v);
    setNome(n);
}

Pagamento::~Pagamento()
{

}

double Pagamento::getValor()
{
    return Valor;
}

std::string Pagamento::getNome()
{
    return Nome;
}

void Pagamento::setValor(double v)
{
    Valor=v;
}

void Pagamento::setNome(std::string n)
{
    Nome=n;
}
