#include <iostream>
#include "Data.h"

using namespace std;

int main(){

    Data data = Data(), data2 = Data(20,2,2013);
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

    cout << data.getDia() << endl;
    cout << data.getMes() << endl;
    cout << data.getAno() << endl;
    
        cout << "Comparacao da data digitada com 20/2/2013: ";
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
