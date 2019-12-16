#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>

using namespace std;

class Trabalhador
{
protected:
    string nome;
    double salario;

public:
    Trabalhador(string, double);

    virtual double calcularPagamentoSemanal(int);

    string getNome();
};

#endif