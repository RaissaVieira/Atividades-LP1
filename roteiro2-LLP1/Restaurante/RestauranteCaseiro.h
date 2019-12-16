#ifndef RestauranteCaseiro_H
#define RestauranteCaseiro_H
#include <string>
#include "MesaDeRestaurante.h"

class RestauranteCaseiro
{
private:
    /* data */
public:
    RestauranteCaseiro(/* args */);

    MesaDeRestaurante mesas[10];

    bool cadastrarMesa(int);
    void adicionaPedido(int, Pedido);
    double calculaTotalRestaurante();
    double calculaTotalMesa(int);
    std::string ListarPedidos(int);
    std::string toString();
    
};

#endif 