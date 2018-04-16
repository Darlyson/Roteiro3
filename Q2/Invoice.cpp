#include "Invoice.h"
#include <iostream>


void Invoice::setNum(int n){
    numero = n;
}
void Invoice::setQuan(int q){
    quantidade=q;
}

void Invoice::setPre(float p){
    preco = p;
}

void Invoice::setDesc(std::string d){
    descricao = d;
}

int Invoice::getNum(){
    return numero;

}
int Invoice::getQuan(){
    return quantidade;

}
float Invoice::getPre(){
    return preco;
}
std::string Invoice::getDesc(){
    return descricao;


}
 float Invoice::getInvoiceAmount(){
    return quantidade*preco;

 }



Invoice::Invoice(int n,int q, float p, std::string d)
{
   Invoice::setNum(n);
   Invoice::setQuan(q);
   Invoice::setPre(p);
   Invoice::setDesc(d);


}
