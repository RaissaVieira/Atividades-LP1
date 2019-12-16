#include "Horario.h"

Horario::Horario(/* args */){
    hora = min = seg = 0;
}
Horario::Horario(int h, int m, int s){
    hora = h;
    min = m;
    seg = s;
}
int Horario::setHorario(int h,int m,int s){
    setSegundo(s);
    setHora(h);
    setMinuto(m);
}
int Horario::getHora(){
    return hora;
}
int Horario::getMinuto(){
    return min;
}
int Horario::getSegundo(){
    return seg;
}
void Horario::setHora(int h){
    if (h >= 0 && h <= 24)
        hora = h;
    else 
        hora = 00;
}
void Horario::setMinuto(int m){
    min = (m >= 0 && m <= 59) ? m : 00;
}
void Horario::setSegundo(int s){
    seg = (s >= 0 && s <= 59) ? s : 00;
}
int Horario::avancarHorario(int s){
    if (s < 59)
    {
        seg++;
        setSegundo(seg);
    }
    else 
    {
        seg = 00;
        min++;
        setSegundo(seg);

        if (min > 59)
        {
            min = 0;
            hora++;
            setHora(hora);
            setMinuto(min);
        }
        
    }    
}