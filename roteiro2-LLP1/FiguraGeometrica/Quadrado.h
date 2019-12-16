#ifndef QUADRADO_H
#define QUADRADO_H
#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica
{
private:
    /* data */
public:
    Quadrado();

    double calculaArea(double);
};

#endif