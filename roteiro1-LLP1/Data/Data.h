#ifndef DATA_H
#define DATA_H

class Data
{
private:
    int dia, mes, ano;
public:
    int getDia();
    int getMes();
    int getAno();
    void setDia(int diaS);
    void setMes(int mesS);
    void setAno(int anoS);
    int avancarDia();
};

#endif