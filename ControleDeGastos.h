#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <string>

class ControleDeGastos
{
    private:
        Despesa despesas;
        int indice;

    public:
        ControleDeGastos();
        virtual ~ControleDeGastos();
        setDespesas();
        setDespesas(double, std::string);
        double calculaTotalDeDespesas();
        bool existeDespesaDoTipo();
};

#endif // CONTROLEDEGASTOS_H
