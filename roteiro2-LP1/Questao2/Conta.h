#ifndef CONTA_H
#define CONTA_H
#include "IConta.h"
#include <string>

class Conta : public IConta
{
protected:
    /* data */
    std::string nomeCliente;
    double salarioMensal, saldo, limite;
    int numeroConta;
public:
    //Conta(/* args */);
    Conta(std::string nome,double s,int nc, double saldo);

    void setNome(std::string);
    void setSalario(double);
    void setNumConta(int);
    
    void definirLimite();

    std::string getNome();
    double getSalario();
    int getNumConta();
    double getLimite();
    double getSaldo();

    void sacar(double valor);
    void depositar(double valor);
};

#endif