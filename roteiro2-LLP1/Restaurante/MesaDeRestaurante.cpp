#include "MesaDeRestaurante.h"
#include <iostream>
#include <sstream>

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(/* args */){
    indice = 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p){

    for (int i = 0; i < 50; i++)
    {
        if(p.getDescricao() == pedidos[i].getDescricao())
            pedidos[i].setQuantidade(pedidos[i].getQuantidade() + p.getQuantidade());
            return;
    }

    pedidos[indice] = p;
    indice++;
}
void MesaDeRestaurante::zeraPedidos(){
    for (int i = 0; i < 50; i++)
    {
        pedidos[i].setQuantidade(0);
    }
    
}
double MesaDeRestaurante::calculaTotal(){
    double total = 0;
    for (int i = 0; i < 50; i++)
    {
       total += pedidos[i].getPreco() * pedidos[i].getQuantidade();
    }

    return total;
}

string MesaDeRestaurante::toString(){
    string saida;
    stringstream total;

    for (int i = 0; i < 50; i++)
    {
        saida += pedidos[i].toString() + "\n";
    }

    total << calculaTotal();

    saida += "\nTotal: " + total.str();
    
    return saida;
}