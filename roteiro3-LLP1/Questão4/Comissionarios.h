#ifndef COMISSIONARIOS
#define COMISSIONARIOS
#include "Funcionario.h"

class Comissionarios : public Funcionario
{
private:
    double salario;
    double vendasSemanais, percentualComissao;
public:
    Comissionarios(/* args */);
    Comissionarios(std::string n, int m, double s, double vs);

    void setSalario(double salario);
    void setVendaSemanais(double vendas);

    double calculaSalario();
};

#endif