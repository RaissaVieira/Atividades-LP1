#include <iostream>
#include "Empregado.h"
#define max 2

using namespace std;

int main(){

    Empregado emp[max];
    string nome, sobrenome;
    float salario;

    cout << "_____________________________" << endl;
    cout << "Cadastro" << endl;
    cout << "_____________________________" << endl;


    for(int i=0; i<max; i++){
        emp[i] = Empregado();

        cout << "Empregado " << i+1 << endl;

        cout << "Nome: ";
        cin >> nome;
        emp[i].setNome(nome);
        cout << "Sobrenome: ";
        cin >> sobrenome;
        emp[i].setSobrenome(sobrenome);
        cout << "Salario: ";
        cin >> salario;
        emp[i].setSalario(salario);
        cout << endl;

    }

    cout << "_____________________________" << endl;
    cout << "Listar cadastros" << endl;
    cout << "_____________________________" << endl;


    for (int i = 0; i < max; i++)
    {
        cout << "Empregado " << i+1 << endl;
        cout << "Nome: " << emp[i].getNome() << endl;;
        cout << "Sobrenome: " << emp[i].getSobrenome() << endl;;
        cout << "Salario anterior: " << emp[i].getSalario() << endl;;
        cout << "Salario atual: " << emp[i].AumentoSalario() << endl;
        cout << endl;
    }
    


    return 0;
}