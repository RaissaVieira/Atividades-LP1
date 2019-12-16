#ifndef VOO_H
#define VOO_H
#include "Data.h"
#include "Horario.h"

class Voo
{
private:
    int numero;
public:
    Voo(/* args */);
    Voo(int, Horario, Data);
    
    int cadeiras[100];
    Horario hora;
    Data data;

    bool verifica(int);
    int proximoLivre();
    bool ocupa(int);
    int vagas();
    int getNumVoo();

    Horario getHorario();
    Data getData();

};

#endif 

