#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(Pedido p, int numMesa);
        double calculaTotalRestaurante();
        std::string toString();
    private:
        MesaDeRestaurante mesas[50];
};

#endif // RESTAURANTECASEIRO_H
