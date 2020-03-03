#pragma once
#include "Funcionario.h"
#include <vector>


class SistemaGerenciaFolha
{
private:
    /* data */
    double orcamento;
public:
    SistemaGerenciaFolha(/* args */);

    std::vector<Funcionario *> funcionarios;

    void setFuncionario(Funcionario*);
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(std::string);
};
