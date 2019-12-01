#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

using namespace std;

class Pagamento
{
private:

public:
    Pagamento();
    Pagamento(double salario, string nome);

    double valorPagamento;
    string nomeDoFuncionario;
    
    double getSalario();
    string getNomeDoFuncionario();

    void getSalario(double salario);
    void getNomeDoFuncionario(string nome);

};

#endif