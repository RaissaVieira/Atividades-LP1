#include "Funcionario.h"

Funcionario::Funcionario(/* args */){
    nome = "";
    matricula = 0;
}
Funcionario::Funcionario(std::string n, int m){
    nome = n;
    matricula = m;
}

void Funcionario::setNome(std::string nome){
    this->nome = nome;
}
std::string Funcionario::getNome(){
    return nome;
}
void Funcionario::setMatricula(int matricula){
    this->matricula = matricula;
}
int Funcionario::getMatricula(){
    return matricula;
}
double Funcionario::calculaSalario(){

}
