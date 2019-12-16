#ifndef HORARIO_H
#define HORARIO_H

class Horario
{
private:
    int hora,min, seg;
public:
    Horario(/* args */);
    Horario(int h, int m, int s);

    int setHorario(int,int,int);
    int getHora();
    int getMinuto();
    int getSegundo();

    void setHora(int);
    void setMinuto(int);
    void setSegundo(int);

    int avancarHorario(int);
};

#endif