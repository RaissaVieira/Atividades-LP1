#ifndef TRABALHADOR_POR_HORA_H
#define TRABALHADOR_POR_HORA_H
#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador
{
private:
    double valordahora;
public:
    TrabalhadorPorHora(string, double valorHora);

    void setValorDaHora(double);
    double carcularPagamentoSemanal1(int);
};

#endif