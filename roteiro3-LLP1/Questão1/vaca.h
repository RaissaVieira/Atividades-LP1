#ifndef VACA_H
#define VACA_H
#include "animais.h"

class vaca : public animais
{
private:
    /* data */
public:
    vaca(/* args */);
    virtual void alimento(){
        std::cout << "Come capim\n";
    }
};

vaca::vaca(/* args */)
{
}

#endif