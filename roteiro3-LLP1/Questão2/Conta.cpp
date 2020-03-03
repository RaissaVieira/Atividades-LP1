#include "Conta.h"

Conta::Conta(){
    nomeCliente = "";
    numeroConta = 0;
    saldo = 0;
    salarioMensal = 0; 
    limite = 0;
}
Conta::Conta(std::string n, double salario, int num, double s){
    nomeCliente = n;
    salarioMensal = salario;
    numeroConta = num;
    saldo = s;
}
void Conta::getNomeCliente(std::string nome){
    nomeCliente = nome;
}
std::string Conta::setNomeCliente(){
    return nomeCliente;
}
void Conta::getSalarioMensal(double s){
    salarioMensal = s;
}
double Conta::setSalarioMensal(){
    return salarioMensal;
}
void Conta::getNumeroConta(int n){
    numeroConta = n;
}
int Conta::setNumeroConta(){
    return numeroConta;
}
double Conta::setSaldo(){
    return saldo;
}
void Conta::definirLimite(){
    limite = 2 * salarioMensal;
}
double Conta::setLimite(){
    return limite;
}
void Conta::sacar(double valor){
    saldo -= valor;
}
void Conta::depositar(double valor){
    saldo += valor;
}