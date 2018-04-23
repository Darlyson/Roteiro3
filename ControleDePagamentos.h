#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>

class ControleDePagamentos
{
    private:
        Pagamento pagamentos;
        int indice;

    public:
        ControleDePagamentos();
        ControleDePagamentos(double,std::string);
        virtual ~ControleDePagamentos();
        void setPagamentos(double, std::string);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario();
};

#endif // CONTROLEDEPAGAMENTOS_H
