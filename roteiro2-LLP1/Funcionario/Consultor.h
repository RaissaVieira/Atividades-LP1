#ifndef CONSULTOR_H
#define CONSULTOR_H

#include "Funcionario.h"

class Consultor : public Funcionario
{
    public:
        Consultor();
        Consultor(std::string m, std::string n, double s); 

        double getSalario();
        double getSalario(double per);
    
    protected:

    private:
};

#endif 
