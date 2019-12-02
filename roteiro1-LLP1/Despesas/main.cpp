#include <iostream>
#include <string>
#include "Despesa.h"
#include "ControleDeGastos.h"
#define max 2

using namespace std;

int main(){

    ControleDeGastos gastos = ControleDeGastos();
    string tipo;
    double valor = 0, total = 0;

    for (int i = 0; i < max; i++)
    {
        cout << "Cadastro " << i+1 << endl;
        cout << "Valor: ";
        cin >> valor;
        cout << "Tipo: ";
        cin >> tipo;

        gastos = ControleDeGastos(valor, tipo, i);
        total += gastos.CalculaTotalDeDespesas();
    }

    cout << "Total do(s) gasto(s): " << total << endl;

    cout << "Tipo de despesa a procurar: ";
    cin >> tipo;

        if (gastos.existeDespesaDoTipo(tipo))
            cout << "Existe despesa desse tipo" << endl;
        else 
            cout << "Nao existe despesa desse tipo" << endl;

    return 0;
}