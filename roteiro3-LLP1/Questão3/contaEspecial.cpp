#include "contaEspecial.h"

contaEspecial::contaEspecial(/* args */)
{
}
contaEspecial::contaEspecial(std::string n, int num, double saldo, double s): contaCorrente(n,num,saldo,s){
}
double contaEspecial::definirLimite(){
    return 4*salario;
}