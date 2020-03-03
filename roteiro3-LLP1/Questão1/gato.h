#ifndef GATO_H
#define GATO_H
#include "animais.h"

class gato : public animais
{
private:
    /* data */
public:
    gato(/* args */);
    virtual void alimento(){
        std::cout << "Come racao\n";
    }
};

gato::gato(/* args */)
{
}

#endif