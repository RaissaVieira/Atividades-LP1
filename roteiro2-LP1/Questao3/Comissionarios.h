#pragma once
#include "Funcionario.h"

class Comissionarios : public Funcionario
{
private:
    double salario;
    double vendasSemanais, percentualComissao;
public:
    Comissionarios(/* args */);

    void getSalario(double salario);
    void getVendaSemanais(double vendas);

    double calculaSalario();
};