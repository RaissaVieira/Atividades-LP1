#include "Horista.h"

Horista::Horista(/* args */){}

void Horista::getSalario(double salario){
    this->salario = salario;
}
void Horista::getHorasTrabalhadas(double horas){
    horasTrabalhadas = horas;
}
double Horista::calculaSalario(){
    double taxa = 10; //considerando 10 reais por cada hora extra
    if(horasTrabalhadas == 40){
        return salario;
    }
    else{
        return salario + (horasTrabalhadas-40)*1.5*taxa;
    }
}