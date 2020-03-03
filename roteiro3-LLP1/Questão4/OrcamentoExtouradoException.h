#ifndef OEXCEPTION_H
#define OEXCEPTION_H

#include <exception>

class OrcamentoExtrouradoException : public std::exception
{
private:

public:
    OrcamentoExtrouradoException(/* args */) throw();

};

#endif