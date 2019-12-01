#include "Invoice.h"

Invoice :: Invoice(){
    numero = 0;
    quantidade = 0;
    descricao = "0";
    preco = 0;
}

Invoice::Invoice(int n, int q, string d, float p){
    numero = n;
    quantidade = q < 0 ? 0 : q;
    descricao = d;
    preco = p < 0 ? 0 : p;
}

void Invoice::setNumero(int n){
    numero = n;
}
void Invoice::setQuantidade(int q){
    quantidade = q;
}
void Invoice::setDescricao(string d){
    descricao = d;
}
void Invoice::setpreco(float p){
    preco = p;
}
int Invoice::getNumero(){
    return numero;
}
int Invoice::getQuantidade(){
    return quantidade;
}
string Invoice::getDescricao(){
    return descricao;
}
float Invoice::getPreco(){
    return preco;
}
float Invoice::getInvoiceAmount(){
    return preco*quantidade;
}
