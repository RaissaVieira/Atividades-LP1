#ifndef MesaDeRestaurante_H
#define MesaDeRestaurante_H
#include "Pedido.h"

//#define max 50

class MesaDeRestaurante
{
private:
    Pedido pedidos[50];
    int indice;

public:
    MesaDeRestaurante(/* args */);

    void setPedidos(Pedido);
    void adicionaAoPedido(Pedido);
    void zeraPedidos();
    double calculaTotal();
    std::string ListarPedido(int);
    string toString();
};

#endif