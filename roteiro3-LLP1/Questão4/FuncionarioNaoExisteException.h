#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <exception>


class FuncionarioNaoExisteException : public std::exception
{
private:

public:
    FuncionarioNaoExisteException(/* args */) throw();

};

#endif