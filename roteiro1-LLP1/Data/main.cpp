#include <iostream>
#include "Data.h"

using namespace std;
int main(){
    Data data;
    int dia, mes, ano;

    cout << "Digite o dia: ";
    cin >> dia;
    data.setDia(dia);
    cout << "Digite o mes: ";
    cin >> mes;
    data.setMes(mes);
    cout << "Digite o ano: ";
    cin >> ano;
    data.setAno(ano);

    cout << "Dia/ mes/ ano: " << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;

    data.avancarDia();

    cout << "Dia/ mes/ ano: " << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << endl;
    


}