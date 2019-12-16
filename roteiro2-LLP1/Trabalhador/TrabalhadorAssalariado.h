#ifndef TRABALHADOR_ASSALARIADO_H
#define TRABALHADOR_ASSALARIADO_H
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador
{
private:
    /* data */
public:
    TrabalhadorAssalariado(string, double);

    double carcularPagamentoSemanal();

};

#endif