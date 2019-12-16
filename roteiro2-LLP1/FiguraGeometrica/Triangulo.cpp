#include "Triangulo.h"

Triangulo::Triangulo() : FiguraGeometrica() {

}

double Triangulo::calculaArea(double b, double h){
    return (b*h)/2;    
}