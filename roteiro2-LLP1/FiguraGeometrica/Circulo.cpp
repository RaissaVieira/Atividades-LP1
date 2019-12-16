#include "Circulo.h"

Circulo::Circulo() : FiguraGeometrica() {

}

double Circulo::calculaArea(double r){
    return 3.14*r*r;    
}