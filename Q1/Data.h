#ifndef DATA_H
#define DATA_H


class Data
{
    private:
        int dia;
        int mes;
        int ano;
        bool calculaBisesto(int);
        bool verificaData();
    public:
        Data();
        Data(int, int, int);
        virtual ~Data();
        int getDia();
        int getMes();
        int getAno();
        void setDia(int);
        void setMes(int);
        void setAno(int);
        void avancarDia();

};

#endif // DATA_H
