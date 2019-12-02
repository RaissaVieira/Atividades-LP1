#ifndef ControleDeGastos_H
#define ControleDeGastos_H
#include "Despesa.h"
#include <string>

using namespace std;

class ControleDeGastos
{
private:
    /* data */
public:
    ControleDeGastos();
    ControleDeGastos(double valor, string tipo, int i);

    static const int pos = 10;

    Despesa despesas[pos];

    void setDespesa(Despesa d, int pos);

    double CalculaTotalDeDespesas();
    bool existeDespesaDoTipo(string);
};

#endif