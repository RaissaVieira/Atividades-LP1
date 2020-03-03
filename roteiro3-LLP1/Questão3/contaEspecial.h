#ifndef CONTAESPECIAL
#define CONTAESPECIAL 
#include "contaCorrente.h"

class contaEspecial : public contaCorrente
{
private:
    
public:
    contaEspecial(/* args */);
    contaEspecial(std::string n, int num, double saldo, double s);

    double definirLimite();
};

#endif