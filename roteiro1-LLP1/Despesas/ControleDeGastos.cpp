#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos(){
    for (int i = 0; i < pos; i++)
    {
        despesas[i].valor = 0;
        despesas[i].tipoDeGasto = "";
    }
}
ControleDeGastos::ControleDeGastos( double valor, string tipo, int i){
            despesas[i].valor = valor;
            despesas[i].tipoDeGasto = tipo;
}
void ControleDeGastos::setDespesa(Despesa d, int pos){
    for (int i = 0; i < pos; i++)
    {
        despesas[i] = d;
    }
}
double ControleDeGastos::CalculaTotalDeDespesas(){
    double total = 0;

    for (int i = 0; i < pos; i++)
    {
        total += despesas[i].valor;
    }

    return total;
}
bool ControleDeGastos::existeDespesaDoTipo(string tipo){
    int nada = 0;
    for (int i = 0; i < pos; i++)
    {
        if(despesas[i].tipoDeGasto == tipo){
            nada = 1; 
        }
    }
    return nada;
}