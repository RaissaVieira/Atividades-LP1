#include "Conta.h"
#include "SaldoNaoDisponivelException.h"

Conta::Conta(std::string nome,double s,int nc, double saldo){
    nomeCliente = nome;
    salarioMensal = s;
    numeroConta = nc;
    this->saldo = saldo;
}

void Conta::setNome(std::string nome){
    nomeCliente = nome;
}
void Conta::setSalario(double s){
    salarioMensal = s;
}
void Conta::setNumConta(int nc){
    numeroConta = nc;
}
void Conta::definirLimite(){
    limite = 2*salarioMensal;
}
std::string Conta::getNome(){
    return nomeCliente;
}
double Conta::getSalario(){
    return salarioMensal;
}
int Conta::getNumConta(){
    return numeroConta;
}
double Conta::getLimite(){
    return limite;
}
double Conta::getSaldo(){
    return saldo;
}
void Conta::sacar(double valor){
    if (valor > saldo)
        throw SaldoNaoDisponivelException();
    else
        saldo -= valor;
}
void Conta::depositar(double valor){
        saldo += valor;
}