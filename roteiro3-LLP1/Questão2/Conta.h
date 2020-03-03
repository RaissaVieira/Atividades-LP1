#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

class Conta : public IConta
{
protected:
    std::string nomeCliente;
    double salarioMensal, saldo, limite;
    int numeroConta;

public:
    Conta();
    Conta(std::string n, double salario, int num, double s);

    void getNomeCliente(std::string);
    std::string setNomeCliente();
    void getSalarioMensal(double);
    double setSalarioMensal();
    void getNumeroConta(int);
    int setNumeroConta();
    double setSaldo();
    void definirLimite();
    double setLimite();

    void sacar(double valor);
    void depositar(double valor);
};

#endif