#ifndef Pedido_H
#define Pedido_H
#include <string>

using namespace std;

class Pedido
{
private:
    int numero, quantidade;
    string descricao;
    double preco;
    static int quantidadeAtualPedidos;

public:
    Pedido(/* args */);
    Pedido(string descr, int quant, double prec);
    string toString();

    int getQuantidade();
    string getDescricao();
    double getPreco();

    void setQuantidade(int);
    void setDescricao(string);
};

#endif