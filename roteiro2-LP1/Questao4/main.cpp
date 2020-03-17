#include <iostream>
#include "TestaValidaNumero.h"

int main(){
    TestaValidaNumero n;

    try
    {
        //n.validaNumero(-1);
        n.validaNumero(10);
        //n.validaNumero(130);
        //n.validaNumero(8900);

        std::cout << "Valor normal\n";
    }
    catch(ValorAbaixoException e1)
    {
        std::cout << "Valor abaixo do esperado\n";
    }
    catch(ValorAcimaException e2)
    {
        std::cout << "Valor acima do esperado\n";
    }
    catch(ValorMuitoAcimaException e3)
    {
        std::cout << "Valor muito acima do esperado\n";
    }
    
    std::cout << "Continuando programa...\n";
    
}