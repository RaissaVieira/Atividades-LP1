#include "ControleDePagamento.h"
#include "Pagamento.h"

ControleDePagamento::ControleDePagamento(){
    for (int i = 0; i < max; i++)
    {
        pagamentos[i].valorPagamento = 0;
        pagamentos[i].nomeDoFuncionario = "";
    }
}
ControleDePagamento::ControleDePagamento(string nome, double valor, int i){
    pagamentos[i].valorPagamento = valor;
    pagamentos[i].nomeDoFuncionario = nome;
}

void ControleDePagamento::setPagamentos(Pagamento funcionario, int i){
    pagamentos[i] = funcionario;
}

double ControleDePagamento::calculaTotalDePagamentos(){
    double total = 0;

    for (int i = 0; i < max; i++)
    {
        total += pagamentos[i].valorPagamento;
    }

    return total;
}
bool ControleDePagamento::existePagamentoParaFuncionario(string nome){
    for (int i = 0; i < max; i++)
    {
        if(pagamentos[i].nomeDoFuncionario == nome){
            return 1;
        }
    }
    return 0;
}