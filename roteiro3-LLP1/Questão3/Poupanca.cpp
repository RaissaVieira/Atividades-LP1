#include "Poupanca.h"

Poupanca::Poupanca(/* args */)
{
}

Poupanca::Poupanca(std::string n, int num, double sal, int v, double ren): Conta(n,num,sal){
    variacao = v;
    taxaRendimento = ren;
}

void Poupanca::getVariacao(int v){
    variacao = v;
}
int Poupanca::setVariacao(){
    return variacao;
}
void Poupanca::getRendimento(int r){
    taxaRendimento = r;
}
double Poupanca::setRendimento(){

}

double Poupanca::render(){
    if (variacao == 51){
        return taxaRendimento*saldo;
    }
    else
    {
        return (taxaRendimento+0.005)*saldo;
    }
}