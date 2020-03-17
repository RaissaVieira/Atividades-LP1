#include "Funcionario.h"

Funcionario::Funcionario(/* args */){
    nome = "";
    matricula = 0;
}

void Funcionario::getNome(std::string nome){
    this->nome = nome;
}
std::string Funcionario::setNome(){
    return nome;
}
void Funcionario::getMatricula(int matricula){
    this->matricula = matricula;
}
int Funcionario::setMatricula(){
    return matricula;
}
double Funcionario::calculaSalario(){

}
