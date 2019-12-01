#include "Empregado.h"

Empregado::Empregado(){
    nome = "";
    sobrenome = "";
    salario = 0;
}
Empregado::Empregado(string n, string s, float sa){
    nome = n;
    sobrenome = s;
    salario = sa;
}
void Empregado::setNome(string n){
    nome = n;
}
void Empregado::setSobrenome(string s){
    sobrenome = s;
}
void Empregado::setSalario(float sa){
    salario = sa;
}
string Empregado::getNome(){
    return nome;
}
string Empregado::getSobrenome(){
    return sobrenome;
}
float Empregado::getSalario(){
    return salario;
}
float Empregado::AumentoSalario(){
    salario += salario*0.1;
}