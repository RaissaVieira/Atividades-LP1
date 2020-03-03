#ifndef POUPANCA
#define POUPANCA 
#include "Conta.h"

class Poupanca : public Conta
{
protected:
    int variacao;
    double taxaRendimento;
public:
    Poupanca(/* args */);
    Poupanca(std::string n, int num, double sal, int v, double ren);

    void getVariacao(int v);
    int setVariacao();
    void getRendimento(int r);
    double setRendimento();

    double render();
};


#endif