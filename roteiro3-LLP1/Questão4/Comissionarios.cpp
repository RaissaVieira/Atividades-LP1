#include "Comissionarios.h"

Comissionarios::Comissionarios(/* args */){}
Comissionarios::Comissionarios(std::string n, int m, double s, double vs) : Funcionario(n,m) {
    salario = s;
    vendasSemanais = vs;
}

void Comissionarios::setSalario(double salario){
    this->salario = salario;
}
void Comissionarios::setVendaSemanais(double vendas){
    vendasSemanais = vendas;
}

double Comissionarios::calculaSalario(){
    percentualComissao = 0.05; //considera que o funcionario tem um percentual fixo de 5%
    return salario + percentualComissao*vendasSemanais;
}