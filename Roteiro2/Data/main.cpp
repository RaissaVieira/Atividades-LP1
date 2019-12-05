#include <iostream>
#include "Data.h"

using namespace std;

int main(){

    Data data, data2 = Data(20,2,2013);
    int dia, mes, ano;

    cout << "Digite um dia: ";
    cin >> dia;
    data.setDia(dia);
    cout << "Digite um mes: ";
    cin >> mes;
    data.setMes(mes);
    cout << "Digite um ano: ";
    cin >> ano;
    data.setAno(ano);

    data = Data(dia,mes,ano);

    cout << "A data digitada e maior que 20/2/2013: ";
    if (data.compara(data2, data) == 0)
        cout << "Sao iguais" << endl;
    else if (data.compara(data2, data) == 1)
        cout << "É menor" << endl;
    else if (data.compara(data2, data) == -1)
        cout << "É maior"<< endl;

    cout << "O mes digitado e: " << data.getMesExtenso(mes) << endl;
    cout << "O ano e bissexto: ";
    if (data.isBissexto(ano) == 1){
        cout << "sim" << endl;
    }
    else
    {
        cout << "nao" << endl;
    }
    

    return 0;
}