#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{
    Empregado funcionario;
    Empregado empregado("Jorge","soares",4000);

    cout<<funcionario.getNome()<<" ";
    cout<<funcionario.getSobrenome()<<endl;
    cout<<"Seu salario eh= "<<funcionario.getSalario()<<endl;
    cout<<empregado.getNome()<<" ";
    cout<<empregado.getSobrenome()<<endl;
    cout<<"Seu salario eh = "<<empregado.getSalario()<<endl;

    empregado.aumentarSalario(10);
    funcionario.aumentarSalario(10);
    cout<<"aumentando Salarios em 10 por cento\n";


    cout<<funcionario.getNome()<<" ";
    cout<<funcionario.getSobrenome()<<endl;
    cout<<"Seu salario eh= "<<funcionario.getSalario()<<endl;
    cout<<empregado.getNome()<<" ";
    cout<<empregado.getSobrenome()<<endl;
    cout<<"Seu salario eh = "<<empregado.getSalario()<<endl;


    return 0;
}
