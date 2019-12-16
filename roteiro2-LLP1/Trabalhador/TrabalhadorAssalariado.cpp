#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(std::string n, double s) : Trabalhador(n,s){

}

double TrabalhadorAssalariado::carcularPagamentoSemanal(){
    return salario/4;
}