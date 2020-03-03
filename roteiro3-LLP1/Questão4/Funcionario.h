#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

class Funcionario
{
protected:
    std::string nome;
    int matricula;
public:
    Funcionario(/* args */);
    Funcionario(std::string n, int m);

    void setNome(std::string nome);
    std::string getNome();
    void setMatricula(int matricula);
    int getMatricula();

    virtual double calculaSalario();
};

#endif