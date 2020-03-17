#pragma once
#include "Funcionario.h"
#include <vector>


class SistemaGerenciaFolha
{
private:
    /* data */
public:
    SistemaGerenciaFolha(/* args */);

    std::vector<Funcionario> funcionarios;

    void setFuncionario();
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario();
};
