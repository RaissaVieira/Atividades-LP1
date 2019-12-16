#include "Trabalhador.h"

Trabalhador::Trabalhador(string n, double s){
    nome = n;
    salario = s;
}
double Trabalhador::calcularPagamentoSemanal(int horas){ 
    return salario / 4; 
}
string Trabalhador::getNome(){
    return nome;
}