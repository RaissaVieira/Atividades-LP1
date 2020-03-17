#include <iostream>
#include "Conta.h"
#include "SaldoNaoDisponivelException.h"

using namespace std;

int main(){
    Conta c1 = Conta("Pedro",3458,5900,5000);

    cout << "Conta\n";
    cout << "Saldo inicial: " << c1.getSaldo() << endl;
    c1.depositar(500);
    cout << "Saldo depois do deposito: " << c1.getSaldo() << endl;
    try
    {
        cout << "Primeiro saque\n";
        c1.sacar(5000);
        cout << "Saldo depois do saque: " << c1.getSaldo() << endl;
    }
    catch(SaldoNaoDisponivelException e)
    {
        cout << "Saldo insuficente" << '\n';
    }
    try
    {
        cout << "Segundo saque\n";
        c1.sacar(700);
        cout << "Saldo depois do saque: " << c1.getSaldo() << endl;
    }
    catch(SaldoNaoDisponivelException e)
    {
        cout << "Saldo insuficente" << '\n';
    }

}