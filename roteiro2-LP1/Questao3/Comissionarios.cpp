#include "Comissionarios.h"

Comissionarios::Comissionarios(/* args */){}

void Comissionarios::getSalario(double salario){
    this->salario = salario;
}
void Comissionarios::getVendaSemanais(double vendas){
    vendasSemanais = vendas;
}

double Comissionarios::calculaSalario(){
    percentualComissao = 0.05; //considera que o funcionario tem um percentual fixo de 5%
    return salario + percentualComissao*vendasSemanais;
}