#ifndef ICONTA_H
#define ICONTA_H

class IConta
{
private:

public:
    IConta(/* args */);

    virtual void sacar(double valor);
    virtual void depositar(double valor);
};

#endif