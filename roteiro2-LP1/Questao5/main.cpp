#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream entrada("teste.txt", ios::in);
    ofstream saida("teste_bkp.txt", ios::out);
    string frase;

    if(!entrada.is_open()){
        cout<<"Nao foi possivel abrir entrada"<<endl;
        return 0;
    }
    if(!saida.is_open()){
        cout<<"Nao foi possivel abrir saida"<<endl;
        return 0;
    }
    while(!entrada.eof()){
        getline(entrada,frase);
    }

    saida<<frase<< endl;

    entrada.close();
    saida.close();
    return 0;
}