#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

using namespace std;

class Empregado
{
private:
    string nome, sobrenome;
    float salario;

public:
    Empregado();
    Empregado(string n, string s, float sa);

    string getNome();
    string getSobrenome();
    float getSalario();

    void setNome(string n);
    void setSobrenome(string s);
    void setSalario(float sa);

    float AumentoSalario();
};

#endif