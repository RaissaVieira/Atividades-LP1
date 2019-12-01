#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamento.h"

using namespace std;

int main(){

    ControleDePagamento funcionario = ControleDePagamento();
;
    string nome, buscar;
    double salario, total = 0;

    for (int i = 0; i < max; i++)
    {
        cout << "Nome: ";
        cin >> nome;
        cout << "Salario: ";
        cin >> salario;

        funcionario = ControleDePagamento(nome, salario, i);
        total += funcionario.calculaTotalDePagamentos();
    }

    cout << "Total gasto com salarios: " << total << endl;
    cout << "Nome que deseja procurar: ";
    cin >> buscar;
    
    if (funcionario.existePagamentoParaFuncionario(buscar))
        cout << "Recebeu o salario" << endl;
    else
        cout << "Nao recebeu o salario" << endl;
    
    return 0;
}