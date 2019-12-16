#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main(){

    Pedido p1 = Pedido("Cerveja",3,4);
    Pedido p2 = Pedido("Carne", 2,3);
    Pedido p3 = Pedido("Carne",5,8);
    Pedido p4 = Pedido("Caipirinha", 1,6);

    RestauranteCaseiro rest;
    
    rest.adicionaPedido(1, p1);
    rest.adicionaPedido(1, p2);
    rest.adicionaPedido(1, p3);
    rest.adicionaPedido(1, p4);

    rest.adicionaPedido(2, p1);
    rest.adicionaPedido(2, p2);

    cout << rest.toString() << endl;
}