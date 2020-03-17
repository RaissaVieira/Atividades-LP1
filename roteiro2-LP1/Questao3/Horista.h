#pragma once
#include "Funcionario.h"

class Horista : public Funcionario
{
private:
    double salario;
    double horasTrabalhadas;
public:
    Horista(/* args */);

    void getSalario(double salario);
    void getHorasTrabalhadas(double horas);

    double calculaSalario();
};

