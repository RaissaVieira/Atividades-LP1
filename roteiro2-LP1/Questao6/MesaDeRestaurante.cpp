#include "MesaDeRestaurante.h"
#include <sstream>

using namespace std;
MesaDeRestaurante::MesaDeRestaurante()
{
    indice = 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido p) {
    for (int i=0 ; i< MAX ; i++) {
        if (pedidos[i].getDescricao() == p.getDescricao()) {
            pedidos[i].setQuant( pedidos[i].getQuant() + p.getQuant() );
            return;
        }
    }

    pedidos[indice] = p;
    indice++;
}

std::string MesaDeRestaurante::toString() {
    std::string saida;
    stringstream total;
    for (int i=0 ; i<indice ; i++) {
        saida += pedidos[i].toString() + "\n";
    }

    total << calculaTotal();
    saida += "Total: " + total.str();

    return saida;
}

void MesaDeRestaurante::zeraPedidos() {
    for (int i=0 ; i<MAX ; i++) {
        pedidos[i].setQuant(0);
    }
}

double MesaDeRestaurante::calculaTotal() {
    double total = 0;
    for (int i=0 ; i<MAX ; i++) {
        total += pedidos[i].getQuant() * pedidos[i].getPreco();
    }

    return total;
}
