#include "Consultor.h"
#include <iostream>

Consultor::Consultor()
    : Funcionario("", "", 0) 
{

}
double Consultor::getSalario(){
    return salario*1.1; 
}
double Consultor::getSalario(double per){
    return salario + salario*per;
}
Consultor::Consultor(std::string m, std::string n, double s)
    : Funcionario(m, n, s) 
{

}
