#include "contaCorrente.h"

contaCorrente::contaCorrente(/* args */)
{
}
contaCorrente::contaCorrente(std::string n, int num, double saldo, double s) {
    Conta(n,num,saldo);
    salario = s;
}
double contaCorrente::definirLimite(){
    return 2*salario;
}
