#include "Data.h"
#include <iostream>

Data::Data(){
    dia = 1;
    mes = 1;
    ano = 1990;
}
Data::Data(int dia,int mes,int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;

    if (verificaData() == false){
		std::cout << "Data invalida" << std::endl;
		dia = 1;
		mes = 1;
		ano = 1990;
	}
}
Data::~Data(){

}
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
void Data::setDia(int dia){
    this->dia = dia;
}
void Data::setMes(int mes){
    this->mes = mes;
}
void Data::setAno(int ano){
    this->ano = ano;
}
bool Data::verificaData(){
	if ((dia <= 0) || (dia > 31))
		return false;
	if ((mes <= 0) || (mes > 12))
		return false;
	if ((ano < 0) || (ano > 2018))
		return false;

	return true;
}
void Data::avancarDia(){
    if(calculaBisesto(ano)){
        if(mes!=2){
            if(dia < 30){
                dia++;
            }else
                dia = 1;
                if(mes < 12){
                    mes++;
                }else
                    mes=1;
                    ano++;
        }
        if(mes==2){
            if(dia < 28){
                dia++;
            }else
                dia = 1;
                mes++;
        }
    }else{
                if(mes!=2){
            if(dia < 30){
                dia++;
            }else
                dia = 1;
                if(mes < 12){
                    mes++;
                }else
                    mes=1;
                    ano++;
        }
        if(mes==2){
            if(dia < 29){
                dia++;
            }else
                dia = 1;
                mes++;
        }
    }
}
bool Data::calculaBisesto(int ano){
    if(ano%4 == 0){
        if(ano%100 != 0){
            return true;
        }
    }else if(ano%4 != 0){
        if(ano%400 == 0){
            return true;
        }
    }else
        return false;
}

