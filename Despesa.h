#ifndef DESPESA_H
#define DESPESA_H
#include <string>


class Despesa
{
    private:
        double valor;
        std::string gasto;
    public:
        Despesa();
        Despesa(double, std::string);
        virtual ~Despesa();
        double getValor();
        std::string getGasto();
        void setValor(double);
        void setGasto(std::string);
};

#endif // DESPESA_H
