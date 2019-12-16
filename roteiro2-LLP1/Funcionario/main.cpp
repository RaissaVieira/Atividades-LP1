#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main(){

    Funcionario func1 = Funcionario();
    Consultor cons1 = Consultor();

    func1.setMatricula("1234");
    func1.setNome("Maria");
    func1.setSalario(2500.00);

    cons1.setMatricula("2344");
    cons1.setNome("Joao");
    cons1.setSalario(900.00);

    cout << "Funcionario" << endl;
    cout << "Matricula: " << func1.getMatricula() << endl;
    cout << "Nome: " << func1.getNome() << endl;
    cout << "Salario: " << func1.getSalario() << endl;
    
    cout << "Consultor" << endl;
    cout << "Matricula: " <<  cons1.getMatricula() << endl;
    cout << "Nome: " << cons1.getNome() << endl;
    cout << "Salario: (aumento de 10%)" <<cons1.getSalario() << endl;
    cout << "Salario: (aumento do paramentro passado)" <<cons1.getSalario(0.20) << endl;
    


    return 0;
}