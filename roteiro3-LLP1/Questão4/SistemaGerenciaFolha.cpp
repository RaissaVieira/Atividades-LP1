#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoExtouradoException.h"
#include <iostream>

SistemaGerenciaFolha::SistemaGerenciaFolha(/* args */){
    orcamento = 10000;
}
void SistemaGerenciaFolha::setFuncionario(Funcionario* fun){
    funcionarios.push_back(fun);
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){
    double total=0;
    for (int i = 0; i < funcionarios.size(); i++)
    {
        total+=funcionarios[i]->calculaSalario();
    }

    if(total > orcamento){
        
        throw OrcamentoExtrouradoException();
    } 
    
    return total;
}
double SistemaGerenciaFolha::consultaSalarioFuncionario(std::string fun){
    for (int i = 0; i < funcionarios.size(); i++)
    {
        if (fun == funcionarios[i]->getNome())
            return funcionarios[i]->calculaSalario();
        
    }

    throw FuncionarioNaoExisteException();
}
