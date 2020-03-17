#include "Pedido.h"
#include <sstream>

int Pedido::quantAtualPedidos = 0;
using namespace std;

Pedido::Pedido()
{
    num = quantAtualPedidos;
    quantAtualPedidos++;
    quant = 0;
    preco = 0;
}

Pedido::Pedido(std::string desc, int quant, double preco)
    : Pedido()
{
    descricao = desc;
    this->quant = quant;
    this->preco = preco;
}

std::string Pedido::toString() {
    stringstream ssNum;
    ssNum << num;
    stringstream ssQuant;
    ssQuant << quant;
    stringstream ssPreco;
    ssPreco << preco;
    return "num: " + ssNum.str() + ", desc: " + descricao + ", quant: "
    + ssQuant.str() + ", preco: " + ssPreco.str();
}

int Pedido::getQuant() {
    return quant;
}
void Pedido::setQuant(int q) {
    quant = q;
}
std::string Pedido::getDescricao() {
    return descricao;
}
double Pedido::getPreco() {
    return preco;
}
