#include "Horista.h"

Horista::Horista(/* args */){}
Horista::Horista(std::string n, int m, double s, double h) :Funcionario (n,m){
    salario = s;
    horasTrabalhadas = h;
}
void Horista::setSalario(double salario){
    this->salario = salario;
}
void Horista::setHorasTrabalhadas(double horas){
    horasTrabalhadas = horas;
}
double Horista::calculaSalario(){
    double taxa = 10; //considerando 10 reais por cada hora extra
    if(horasTrabalhadas == 40){
        return salario;
    }
    else{
        salario = salario + (horasTrabalhadas-40)*1.5*taxa;
        return salario;
    }
}