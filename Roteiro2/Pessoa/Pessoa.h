#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade, telefone;
public:
    Pessoa();
    Pessoa(string nom);
    Pessoa(string nom, int id, int tel);

    string getNome();
    int getIdade();
    int getTelefone();

    void setNome(string nom);
    void setIdade(int id);
    void setTelefone(int tel);
};

#endif
