#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
private:
    /* data */
public:
    Triangulo();

    double calculaArea(double, double);
};

#endif