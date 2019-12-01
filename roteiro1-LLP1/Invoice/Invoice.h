#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice
{
private:
    int numero, quantidade;
    string descricao;
    float preco;

public:
    Invoice();
    Invoice(int n, int q, string d, float p);
 

    int getNumero();
    int getQuantidade();
    string getDescricao();
    float getPreco();
    
    void setNumero(int n);
    void setQuantidade(int q);
    void setDescricao(string d);
    void setpreco(float p);

    float getInvoiceAmount();
};
#endif