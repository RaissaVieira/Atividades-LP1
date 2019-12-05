#ifndef DATA_H
#define DATA_H
#include <string>

class Data
{
private:
    int dia, mes, ano;
public:
    Data(/* args */);
    Data(int d, int m, int a);

    int compara(Data, Data);
    std::string getMesExtenso(int);
    bool isBissexto(int);

    int getDia();
    int getMes();
    int getAno();

    void setDia(int);
    void setMes(int);
    void setAno(int);
};

#endif