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

    void getNome(std::string nome);
    std::string setNome();
    void getMatricula(int matricula);
    int setMatricula();

    virtual double calculaSalario();
};

#endif