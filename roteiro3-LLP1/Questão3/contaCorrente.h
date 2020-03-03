#ifndef CONTACORRENTE
#define CONTACORRENTE 
#include "Conta.h"

class contaCorrente : public Conta
{
protected:
    double salario, limite;
public:
    contaCorrente(/* args */);
    contaCorrente(std::string n, int num, double saldo, double s);

    void getSalario(double s);
    double setSalario();

    double definirLimite();
};

#endif