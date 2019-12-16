#include <iostream>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(){

    Quadrado q1;
    Circulo c1;
    Triangulo t1;

    q1.setNome("Quadrado");
    c1.setNome("Circulo");
    t1.setNome("Triangulo");

    cout << "Nome: " << q1.getNome() << endl;
    cout << "Area: " << q1.calculaArea(12) << endl;

    cout << "Nome: " << c1.getNome() << endl;
    cout << "Area: " << c1.calculaArea(23) << endl;

    cout << "Nome: " << t1.getNome() << endl;
    cout << "Area: " << t1.calculaArea(3,9) << endl;

    return 0;
}