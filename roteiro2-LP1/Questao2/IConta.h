#ifndef ICONTA_H
#define ICONTA_H

class IConta
{
private:
    /* data */
public:
    IConta(/* args */);
    virtual void sacar(double valor)=0;
    virtual void depositar(double valor)=0;
};

#endif
