#include <iostream>
#include "Horario.h"

using namespace std;
int main(){
    Horario hora = Horario();
    int h, m, s;

    cout << "Digite a hora: ";
    cin >> h;
    hora.setHora(h);
    cout << "Digite os minutos: ";
    cin >> m;
    hora.setMinuto(m);
    cout << "Digite os segundos: ";
    cin >> s;
    hora.setSegundo(s);

    printf("%d %d %d", hora.getHora(), hora.getMinuto(), hora.getSegundo());

    hora.setHorario(h,m,s);
    printf("%d %d %d", hora.getHora(), hora.getMinuto(), hora.getSegundo());

    hora.avancarHorario(hora.getSegundo());

    cout << "Horario posterior: ";
    cout << hora.getHora() << ":" << hora.getMinuto() << ":" << hora.getSegundo() << endl;
    
}