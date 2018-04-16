#include <iostream>
#include "Invoice.h"
using namespace std;

int main()
{
    Invoice p = Invoice(24545,5,10,"Biscoito");

    cout<<"Numero: "<<p.getNum()<<endl;
    cout<<"Descricao: "<<p.getDesc()<<endl;
    cout<<"Quantidade: "<<p.getQuan()<<endl;
    cout<<"Preco: "<<p.getPre()<<endl;
    cout<<"FATURA: "<<p.getInvoiceAmount()<<endl;

    return 0;
}
