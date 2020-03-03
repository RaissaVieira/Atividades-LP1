#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){
    Conta c1;
    ContaEspecial c2;

    c1.getNomeCliente("Maria");
    c1.getNumeroConta(13);
    c1.getSalarioMensal(1500);
    c1.definirLimite();
    c1.sacar(130);
    c1.depositar(500);

    cout << "Nome: " << c1.setNomeCliente() << endl;
    cout << "Conta:" << c1.setNumeroConta() << endl;
    cout << "Limite: " << c1.setLimite() << endl;
    cout << "Saldo: " << c1.setSaldo() << endl;

    c2.getNomeCliente("Marta");
    c2.getNumeroConta(19);
    c2.getSalarioMensal(1500);
    c2.definirLimite();
    c2.sacar(480);
    c2.depositar(120);
    

    cout << "Nome: " << c2.setNomeCliente() << endl;
    cout << "Conta:" << c2.setNumeroConta() << endl;
    cout << "Limite: " << c2.setLimite() << endl;
    cout << "Saldo: " << c2.setSaldo() << endl;

}
