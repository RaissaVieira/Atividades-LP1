#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include "Pedido.h"
#define MAX 50

class MesaDeRestaurante
{
    public:
        MesaDeRestaurante();
        void adicionaAoPedido(Pedido ped);
        std::string toString();
        void zeraPedidos();
        double calculaTotal();
    private:
        Pedido pedidos[MAX];
        int indice;
};

#endif // MESADERESTAURANTE_H
