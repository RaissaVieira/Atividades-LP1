#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>

class SaldoNaoDisponivelException : public std::exception
{
private:
    /* data */
public:
    SaldoNaoDisponivelException(/* args */) throw();
};

#endif
