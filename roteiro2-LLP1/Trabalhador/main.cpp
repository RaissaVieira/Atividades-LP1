#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){

    TrabalhadorPorHora t1 = TrabalhadorPorHora("Maria", 30);
    TrabalhadorPorHora t2 = TrabalhadorPorHora("Felipe", 25);

    TrabalhadorAssalariado t3 = TrabalhadorAssalariado("Raissa", 4500);
    TrabalhadorAssalariado t4 = TrabalhadorAssalariado("Mel", 3500);

    //Trabalhador por Hora
    cout << "T1" << endl;
    cout << "Nome: " << t1.getNome() << endl;
    cout << "Salario Mensal: " << t1.carcularPagamentoSemanal1(30) << endl;
    
    cout << "T2" << endl;
    cout << "Nome: " << t2.getNome() << endl;
    cout << "Salario Mensal: " << t2.carcularPagamentoSemanal1(45) << endl;

    //Trabalhador Assalariado

    cout << "T3" << endl;
    cout << "Nome: " << t3.getNome() << endl;
    cout << "Salario Semanal: " << t3.carcularPagamentoSemanal() << endl;
    
    cout << "T4" << endl;
    cout << "Nome: " << t4.getNome() << endl;
    cout << "Salario Semanal: " << t4.carcularPagamentoSemanal() << endl;

    
    return 0;
}