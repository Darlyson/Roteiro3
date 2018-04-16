#include "Pessoa.h"
#include <stdio.h>

using namespace std;

Pessoa::Pessoa(string n)
{
   n = "Sem nome";
   Pessoa::setNome(n);
}

Pessoa::Pessoa(string n,string t,int i){

    Pessoa::setNome(n);
    Pessoa::setIdade(i);
    Pessoa::setTel(t);

}

void Pessoa::setNome(string n){
    nome = n;

}

void Pessoa::setTel(string t){
    telefone = t;

}
void Pessoa::setIdade(int i){
    idade = i;

}

int Pessoa::getIdade(){
    return idade;

}

string Pessoa::getNome(){
    return nome;

}
string Pessoa::getTel(){
    return telefone;

}

