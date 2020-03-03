#include "Assalariado.h"

Assalariado::Assalariado(/* args */){}
Assalariado::Assalariado(std::string n, int m, double s) : Funcionario(n,m){
    salario = s;
}
void Assalariado::setSalario(double salario){
    this->salario = salario;
}
double Assalariado::calculaSalario(){
    return salario;
}