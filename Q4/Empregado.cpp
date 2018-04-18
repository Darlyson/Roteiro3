#include "Empregado.h"

using namespace std;
Empregado::Empregado()
{
nome= "Matheus";
sobrenome="Soares";
salario=5000;
}

Empregado::Empregado(string n, string s, float k)
{
nome= n;
sobrenome=s;
salario=k;
}


Empregado::~Empregado()
{
    //dtor
}
string Empregado :: getNome(){



return nome;

}
string Empregado :: getSobrenome(){


return sobrenome;

}
float Empregado :: getSalario(){


return salario;

}
void Empregado :: setNome(string n){

nome=n;


}
void Empregado ::setSobrenome(string s){

sobrenome=s;

}
void Empregado :: setSalario(float s){


salario=s;

}
void Empregado :: aumentarSalario(float v){

salario+=salario/v;

}
