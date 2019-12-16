#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include "Endereco.h"

using namespace std;

class Pessoa
{
private:
    std::string nome, telefone;
    Endereco endereco;
public:
    Pessoa();
    Pessoa(string nome);
    Pessoa(string nome, Endereco endereco, string telefone);

    string getNome();
    string getTelefone();
    string getEndereco();

    void setNome(string);
    void setTelefone(string);
    void setEndereco(Endereco);
};

#endif