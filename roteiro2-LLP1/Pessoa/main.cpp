#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){

    Endereco end1 = Endereco("Rua Projetada","NSL","Uirauna","PB","00000-000", 77);
    Endereco end2 = Endereco("Rua Walfredo","Bancarios","JP","PB","00000-000", 45);

    Pessoa p1 = Pessoa("Maria", end1, "91000000");
    Pessoa p2 = Pessoa("Joao", end2, "90239999");

    cout << "Pessoa 1: " << endl;
    cout << "Nome" << p1.getNome() << endl;
    cout << p1.getEndereco() << endl;
    cout << "Telefone: " << p1.getTelefone() << endl;
    
    cout << "Pessoa 2: " << endl;
    cout << "Nome: " << p2.getNome() << endl;
    cout << p2.getEndereco() << endl;
    cout << "Telefone: " << p2.getTelefone() << endl;
    
    return 0;
}