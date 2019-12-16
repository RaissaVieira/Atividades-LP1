#ifndef CONTROLEDEPAGAMENTO_H
#define CONTROLEDEPAGAMENTO_H
#include "Pagamento.h"
#define max 2

class ControleDePagamento
{
public:
    ControleDePagamento();
    ControleDePagamento(string nome, double valor, int i);

    Pagamento pagamentos[max];
    
    void setPagamentos(Pagamento, int);
    double calculaTotalDePagamentos();
    bool existePagamentoParaFuncionario(string nomeDoFuncionario);
};

#endif