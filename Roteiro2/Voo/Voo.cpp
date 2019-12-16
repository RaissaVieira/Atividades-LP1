#include "Voo.h"

Voo::Voo(/* args */){
    numero = 0;
    data.setAno(0); 
    data.setMes(0);
    data.setDia(0);
    hora.setHora(0);
    hora.setMinuto(0);
    hora.setSegundo(0);

    for (int i = 1; i < 100; i++)
    {
        cadeiras[i] = 0;
    }
    
}
Voo::Voo(int n, Horario h, Data d){
    numero = n;
    data.setAno(d.getAno()); 
    data.setMes(d.getMes());
    data.setDia(d.getDia());
    hora.setHora(h.getHora());
    hora.setMinuto(h.getMinuto());
    hora.setSegundo(h.getSegundo());
}

bool Voo::verifica(int c){
    if(cadeiras[c] == 1)
        return true;
    return false;
}
int Voo::proximoLivre(){
    for (int i = 1; i < 100; i++)
    {
        if(cadeiras[i] == 0)
            return i;
    }
}
bool Voo::ocupa(int i){
    if(verifica(i) == 0){
        cadeiras[i] = 1;
        return true;
    }else 
        return false;
}
int Voo::vagas(){
    int totalVagas = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (cadeiras[i] == 0)
            totalVagas++;
    }

    return totalVagas;
}
int Voo::getNumVoo(){
    return numero;
}
Horario Voo::getHorario(){
    return hora;
}
Data Voo::getData(){
    return data;
}