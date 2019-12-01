#include "Data.h"

using namespace std;

int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
void Data::setDia(int diaS){
    dia = (diaS >= 1 || diaS <= 31) ? diaS : 0;
}
void Data::setMes(int mesS){
    mes = (mesS >= 1 || mesS <= 12) ? mesS : 0;
}
void Data::setAno(int anoS){
    ano = anoS;
}
int Data::avancarDia(){
    dia = (dia > 31) ? 1 : dia+1;
    if (dia >= 31){
        dia = 1;
        if(mes < 12){
            mes++;
        }
        else{ 
            mes = 1;
            ano++;
        }
    }
    
}