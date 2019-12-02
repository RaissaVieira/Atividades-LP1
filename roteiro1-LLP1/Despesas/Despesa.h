#ifndef DESPESAS_H
#define DESPESAS_H
#include <string>

using namespace std;

class Despesa
{
public:
    Despesa();

    double valor;
    string tipoDeGasto;

    double getValor();
    string getTipoDeGasto();

    void setValor(double valor);
    void setTipoDeGasto(string tipoDeGasto);

};

#endif