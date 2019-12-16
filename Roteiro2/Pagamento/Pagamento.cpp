#include "Pagamento.h"

Pagamento::Pagamento(){
    valorPagamento = 0;
    nomeDoFuncionario = "";
}
Pagamento::Pagamento(double salario, string nome){
    valorPagamento = salario;
    nomeDoFuncionario = nome;
}
void Pagamento::getSalario(double salario){
    valorPagamento = salario;
}
void Pagamento::getNomeDoFuncionario(string nome){
    nomeDoFuncionario = nome;
}
double Pagamento::getSalario(){
    return valorPagamento;
}
string Pagamento::getNomeDoFuncionario(){
    return nomeDoFuncionario;
}