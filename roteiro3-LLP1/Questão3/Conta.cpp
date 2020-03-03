#include "Conta.h"
#include <iostream>

Conta::Conta(/* args */)
{
}

Conta::Conta(std::string n, int num, double saldo){
    nomeCliente = n;
    numero = num;
    this->saldo = saldo;
}
void Conta::getNome(std::string n){
    nomeCliente = n;
}
std::string Conta::setNome(){
    return nomeCliente;
}
void Conta::getNumero(int n){
    numero = n;
}
int Conta::setNumero(){
    return numero;
}
double Conta::setSaldo(){
    return saldo;
}
void Conta::sacar(double valor){
    if (valor > saldo){
        std::cout << "Saldo indisponivel" << std::endl;
    }
    else{
        saldo -= valor;
    }
    
}
void Conta::depositar(double valor){
    saldo += valor;
}