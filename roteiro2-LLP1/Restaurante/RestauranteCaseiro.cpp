#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"

RestauranteCaseiro::RestauranteCaseiro(){
    for (int i = 0; i < 10; i++)
    {
        mesas[i] = MesaDeRestaurante();
    }
    
}

void RestauranteCaseiro::adicionaPedido(int i, Pedido p){
    mesas[i].adicionaAoPedido(p);
}
double RestauranteCaseiro::calculaTotalRestaurante(){
    double total = 0;

    for (int i = 0; i < 10; i++)
    {
        total += mesas[i].calculaTotal();
    }

    return total;    
}
string RestauranteCaseiro::toString(){
        std::string saida;
    for (int i=0 ; i<50 ; i++) {
        if (mesas[i].calculaTotal() > 0)
            saida += mesas[i].toString() + "\n";
    }
    return saida;
}