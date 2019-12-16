#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica 
{
private:

public:
    Circulo();

    double calculaArea(double);
};

#endif