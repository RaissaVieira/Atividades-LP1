#include "Data.h"

Data::Data(/* args */){
    dia = 0;
    mes = 0;
    ano = 0;
}
Data::Data(int d, int m, int a){
    dia = (d < 1 || d > 30) ? 01 : d;
    mes = (m < 1 || m > 12) ? 01 : m;
    ano = (a < 0) ? 0001 : a;
}

int Data::compara(Data d1, Data d2){
    if ((d1.getDia() == d2.getDia()) && (d1.getMes() == d2.getMes()) && (d1.getAno() == d2.getAno())){
        return 0;
    }
    else{
        
        if (d1.getAno() < d2.getAno()){
            return 1;
        }else if (d1.getAno() == d2.getAno()){
            if (d1.getMes() < d2.getMes()){
                    return 1;
            }
            else{
                if(d1.getDia() < d2.getDia()){
                    return 1;
                }
            }
        }
        else{
            if (d1.getAno() > d2.getAno()){
                return -1;
            }else if (d1.getAno() == d2.getAno()){
                if (d1.getMes() > d2.getMes()){
                    return -1;
                }
                else{
                    if(d1.getDia() > d2.getDia())
                        return -1;
                }
            }
        } 
    }  
} 
std::string Data::getMesExtenso(int m){
    switch (m)
    {
    case 1 :
        return "Janeiro";
        break;
    case 2 :
        return "Fevereiro";
        break;
    case 3 :
        return "Marco";
        break;
    case 4 :
        return "Abril";
        break;
    case 5 :
        return "Maior";
        break;
    case 6 :
        return "Junho";
        break;
    case 7 :
        return "JUlho";
        break;
    case 8 :
        return "Agosto";
        break;
    case 9 :
        return "Setembro";
        break;
    case 10 :
        return "Outubro";
        break;
    case 11 :
        return "Novembro";
        break;
    case 12 :
        return "Dezembro";
        break;
    default:
        printf("Mes invalido\n");
        break;
    }
}
bool Data::isBissexto(int a){
    if (a%4 == 0 && a%100 != 0 && a%400 == 0)
        return 1;
    else 
        return 0;
}
int Data::getDia(){
    return dia;
}
int Data::getMes(){
    return mes;
}
int Data::getAno(){
    return ano;
}
void Data::setDia(int d){
    dia = d;
}
void Data::setMes(int m){
    mes = m;
}
void Data::setAno(int a){
    ano = a;
}
