#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>
using namespace std;
class Empregado
{
    public:
        Empregado();
        Empregado(string n, string s, float k);
        virtual ~Empregado();
        string getNome();
        string getSobrenome();
        float getSalario();
        void setNome(string n);
        void setSobrenome(string s);
        void setSalario(float s);
        void aumentarSalario(float v);

    private:
       string nome, sobrenome;
       float salario;
};

#endif // EMPREGADO_H
