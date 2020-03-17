#include "Assalariado.h"

Assalariado::Assalariado(/* args */){}

void Assalariado::getSalario(double salario){
    this->salario = salario;
}
double Assalariado::calculaSalario(){
    return salario;
}