#include <iostream>
#include "Pessoa.h"

using namespace std;


int main()
{

    Pessoa x = Pessoa("Bruno","78453153",20);
    //x = Pessoa("Teste");
    cout<<"Nome: "<<x.getNome()<<endl;
    cout<<"Telefone: "<<x.getTel()<<endl;
    cout<<"Idade: " <<x.getIdade()<<endl;
    return 0;

}

