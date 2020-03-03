#ifndef HORISTA
#define HORISTA
#include "Funcionario.h"

class Horista : public Funcionario
{
private:
    double salario;
    double horasTrabalhadas;
public:
    Horista(/* args */);
    Horista(std::string n, int m, double s, double h);

    void setSalario(double salario);
    void setHorasTrabalhadas(double horas);

    double calculaSalario();
};

#endif