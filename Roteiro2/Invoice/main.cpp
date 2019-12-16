#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){

    Invoice produto = Invoice();
    int n,q;
    string d;
    float p, total;

    cout << "Numero: ";
    cin >> n;
    produto.setNumero(n);
    cout << "Quantidade: ";
    cin >> q;
    produto.setQuantidade(q);
    cout << "Descricao: ";
    cin >> d;
    produto.setDescricao(d);
    cout << "Preco: ";
    cin >> p;
    produto.setpreco(p);
    cout << endl;

    produto = Invoice(n,q,d,p);

    total = produto.getInvoiceAmount();

    cout << "_____________________________" << endl;
    cout << "\t    NOTA" << endl;
    cout << "_____________________________" << endl;

    cout << "Numero da compra: " << produto.getNumero() << endl;
    cout << "Descricao do produto: " << produto.getDescricao() << endl;
    cout << "Preco total: " << total << endl;

    return 0;
}