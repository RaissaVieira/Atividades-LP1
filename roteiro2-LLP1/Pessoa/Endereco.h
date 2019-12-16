#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

using namespace std;

class Endereco
{
private:
    string rua, bairro, cidade, estado, cep;
    int numero;
public:
    Endereco(/* args */);
    Endereco(string r, string b, string c, string e, string ce, int num);

    string toString();

};

#endif