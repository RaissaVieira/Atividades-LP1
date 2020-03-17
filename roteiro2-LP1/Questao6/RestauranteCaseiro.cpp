#include "RestauranteCaseiro.h"

RestauranteCaseiro::RestauranteCaseiro()
{
    //ctor
}

void RestauranteCaseiro::adicionaAoPedido(Pedido p, int numMesa) {
    mesas[numMesa].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante() {
    double total = 0;
    for (int i = 0 ; i< 50 ; i++) {
        total += mesas[i].calculaTotal();
    }
    return total;
}

std::string RestauranteCaseiro::toString() {
    std::string saida;
    for (int i=0 ; i<50 ; i++) {
        if (mesas[i].calculaTotal() > 0)
            saida += mesas[i].toString() + "\n";
    }
    return saida;
}
