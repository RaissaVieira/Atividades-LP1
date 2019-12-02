#include "Despesa.h"
#include <string>

Despesa::Despesa(){
    valor = 0;
    tipoDeGasto = ""; 
}
double Despesa::getValor(){
    return valor;
}
string Despesa::getTipoDeGasto(){
    return tipoDeGasto;
}
void Despesa::setValor(double v){
    valor = v;
}
void Despesa::setTipoDeGasto(string t){
    tipoDeGasto = t;
}