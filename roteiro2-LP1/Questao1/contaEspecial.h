#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"
#include <string>

class contaEspecial : public Conta
{
private:
    /* data */
public:

    contaEspecial(std::string nome,double s,int nc, double saldo);
    
    void definirLimite();
};

#endif