#include <iostream>
#include "Conta.h"
#include "contaEspecial.h"

using namespace std;

int main(){
    Conta c1 = Conta("Pedro",3458,5900,5000);
    contaEspecial c2 = contaEspecial("Nara",4600,3200,2500);

    cout << "Conta\n";
    cout << "Saldo inicial: " << c1.getSaldo() << endl;
    c1.depositar(500);
    cout << "Saldo depois do deposito: " << c1.getSaldo() << endl;
    c1.sacar(300);
    cout << "Saldo depois do saque: " << c1.getSaldo() << endl;
    c1.definirLimite();
    cout << "Limite da conta: " << c1.getLimite() << endl;

    cout << "\nConta especial\n";
    cout << "Saldo inicial: " << c2.getSaldo() << endl;
    c2.depositar(300);
    cout << "Saldo depois do deposito: " << c2.getSaldo() << endl;
    c2.sacar(500);
    cout << "Saldo depois do saque: " << c2.getSaldo() << endl;
    c2.definirLimite();
    cout << "Limite da conta: " << c2.getLimite() << endl;
}