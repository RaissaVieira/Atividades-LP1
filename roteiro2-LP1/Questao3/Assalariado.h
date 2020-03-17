#pragma once
#include "Funcionario.h"

class Assalariado : public Funcionario
{
private:
    double salario;
public:
    Assalariado(/* args */);

    void getSalario(double salario);

    double calculaSalario();
};

