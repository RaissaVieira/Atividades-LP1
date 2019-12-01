#include <iostream>
#include "Pessoa.h"
#define max 3

using namespace std;

int main(){

    Pessoa person[max];
    string nome;
    int idade, telefone;

    cout << "_____________________________" << endl;
    cout << "Cadastro" << endl;
    cout << "_____________________________" << endl;

    for (int i = 0; i < max; i++)
    {
        person[i] = Pessoa();

        cout << "Pessoa " << i+1 << endl;

        cout << "Nome: ";
        cin >> nome;
        person[i].setNome(nome);
        cout << "Idade: ";
        cin >> idade;
        person[i].setIdade(idade);
        cout << "Telefone: ";
        cin >> telefone;
        person[i].setTelefone(telefone);
        cout << endl; 
    }

    cout << "_____________________________" << endl;
    cout << "Listar cadastros" << endl;
    cout << "_____________________________" << endl;

    for (int i = 0; i < max; i++)
    {
        cout << "Pessoa " << i+1 << endl;

        cout << "Nome: " << person[i].getNome() << endl;
        cout << "Idade: " << person[i].getIdade() << endl;
        cout << "Telefone: " << person[i].getTelefone() << endl;
        cout << endl;
    }
    return 0;
}