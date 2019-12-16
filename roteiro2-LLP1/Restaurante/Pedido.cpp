#include "Pedido.h"
#include <sstream>

int Pedido::quantidadeAtualPedidos = 0;

Pedido::Pedido(/* args */)
{
    numero = quantidadeAtualPedidos;
    quantidadeAtualPedidos++;
}
Pedido::Pedido(string descr, int quant, double prec) : Pedido()
{
    quantidade = quant;
    descricao = descr;
    preco = prec;
}
string Pedido::toString(){
    stringstream ssnum;
    ssnum << numero;
    stringstream ssquant;
    ssquant << quantidade;
    stringstream sspreco;
    sspreco << preco;

    return "num: "+ ssnum.str() + "\ndesc: " + descricao + "\nquant: "+ ssquant.str() + "\npreco: "+ sspreco.str();
}

int Pedido::getQuantidade(){
    return quantidade;
}
string Pedido::getDescricao(){
    return descricao;
}

void Pedido::setQuantidade(int q){
    quantidade = q;
}
void Pedido::setDescricao(string d){
    descricao = d;
}

double Pedido::getPreco(){
    return preco;
}