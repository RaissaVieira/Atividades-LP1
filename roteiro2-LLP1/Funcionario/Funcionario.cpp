#include "Funcionario.h"
#include <iostream>

Funcionario::Funcionario()
{
}
Funcionario::Funcionario(std::string m, std::string n, double s){
    matricula = m;
    nome = n;
    salario = s;
}
std::string Funcionario::getMatricula(){
    return matricula;
}
std:: string Funcionario::getNome(){
    return nome;
}
double Funcionario::getSalario(){
    return salario;
}
void Funcionario::setMatricula(std::string m){
    matricula = m;
}
void Funcionario::setNome(std::string n){
    nome = n;
}
void Funcionario::setSalario(double s){
    salario = s;
}
