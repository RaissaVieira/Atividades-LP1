#include <iostream>
#include "Poupanca.h"
#include "contaCorrente.h"
#include "contaEspecial.h"

using namespace std;

int main(){

    Poupanca p1 = Poupanca("Iris",34,560,51,0.315);
    contaCorrente c1 = contaCorrente("Marcos",45,5000,3460);
    contaEspecial esp1 = contaEspecial("Maria",12,100,980);

    cout << "Poupanca\n";    
    cout << "Nome: " << p1.setNome() << endl;
    cout << "Numero: " << p1.setNumero() << endl;
    cout << "Rendimento: " << p1.render() << endl;
    cout << "Saldo: " << p1.setSaldo() << endl;

    cout << "Conta Corrente\n";    
    cout << "Nome: " << c1.setNome() << endl;
    cout << "Numero: " << c1.setNumero() << endl;
    cout << "Limite: " << c1.definirLimite() << endl;
    cout << "Saldo: " << c1.setSaldo() << endl;

    cout << "Conta especial\n";
    esp1.sacar(120);
    cout << "Nome: " << esp1.setNome() << endl;
    cout << "Numero: " << esp1.setNumero() << endl;
    cout << "Limite: " << esp1.definirLimite() << endl;
    cout << "Saldo: " << esp1.setSaldo() << endl;
}