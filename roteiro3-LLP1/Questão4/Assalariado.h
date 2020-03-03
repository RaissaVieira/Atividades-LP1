#ifndef ASSALARIADO
#define ASSALARIADO
#include "Funcionario.h"

class Assalariado : public Funcionario
{
private:
    double salario;
public:
    Assalariado(/* args */);
    Assalariado(std::string n, int m, double s);

    void setSalario(double salario);

    double calculaSalario();
};

#endif