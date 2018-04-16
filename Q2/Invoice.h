#ifndef INVOICE_H
#define INVOICE_H
#include <string>


class Invoice
{
    public:
        Invoice(int n,int q,float p ,std::string d);
        void setNum(int);
        void setQuan(int);
        void setPre(float);
        void setDesc(std::string);
        int getNum();
        int getQuan();
        float getPre();
        float getInvoiceAmount();
        std::string getDesc();

    private:
        int numero;
        int quantidade;
        float preco;
        std::string descricao;

};

#endif // INVOICE_H
