#ifndef CONTA_H
#define CONTA_H
#include <string>

class Conta
{
protected:
    std::string nomeCliente;
    int numero;
    double saldo;
public:
    Conta();
    Conta(std::string n, int num, double saldo);

    void getNome(std::string n);
    std::string setNome();
    void getNumero(int n);
    int setNumero();
    double setSaldo();

    virtual void sacar(double valor);
    virtual void depositar(double valor);
};

#endif