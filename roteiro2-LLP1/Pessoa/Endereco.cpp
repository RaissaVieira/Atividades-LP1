#include "Endereco.h"
#include <sstream>

Endereco::Endereco(/* args */){ }
Endereco::Endereco(string r, string b, string c, string e, string ce, int num){
    rua = r;
    bairro = b;
    cidade = c;
    estado = e;
    cep = ce;
    numero = num;
}

std::string Endereco::toString(){
    stringstream ssNum;
    ssNum << numero;

    return "Rua: " + rua + "\nBairro: " + bairro + "\nCidade: " + cidade + "\nEstado: " + estado + "\nCep: " + cep + "\nNumero: " + ssNum.str();
}
