#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
private:
    string nome;
public:
    FiguraGeometrica(/* args */);

    string getNome();
    void setNome(string);

    double calculaArea();
};

#endif