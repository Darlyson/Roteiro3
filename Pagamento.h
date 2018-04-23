#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{
    private:
        double Valor;
        std::string Nome;
    public:
        Pagamento();
        Pagamento(double, std::string);
        virtual ~Pagamento();
        double getValor();
        std::string getNome();
        void setValor(double);
        void setNome(std::string);
};

#endif // PAGAMENTO_H
