#include "contaEspecial.h"

contaEspecial::contaEspecial(std::string nome,double s,int nc, double saldo) : Conta(nome,s,nc,saldo){

}
void contaEspecial::definirLimite(){
    limite = 3*salarioMensal;
}