#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, double valorHora) : Trabalhador(nome,0) {
    valordahora = valorHora; 
}
double TrabalhadorPorHora::carcularPagamentoSemanal1(int h){
    if (h<=40){
        salario = h*valordahora;
        return salario;
    }else{
        salario = 40*valordahora;
        salario+= (h-40)*(valordahora+valordahora/2);
        return salario;
    }
}
