#include "iostream"
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionarios.h"
#include "SistemaGerenciaFolha.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoExtouradoException.h"

int main(){
    Funcionario *f1 = new Horista("Carlos",34,350,47);
    Funcionario *f2 = new Assalariado("Sarah",34,4000);
    Funcionario *f3 = new Comissionarios("Larissa",34,2500,3000);
    SistemaGerenciaFolha x;

    f1->calculaSalario();
    x.setFuncionario(f1);

    f2->calculaSalario();
    x.setFuncionario(f2);

    f3->calculaSalario();
    x.setFuncionario(f3);

    try
    {
        x.consultaSalarioFuncionario("Bruna");
        std::cout << x.consultaSalarioFuncionario("Bruna");
    }
    catch(const FuncionarioNaoExisteException& exp)
    {
        std::cout << "Funcionario nao existe" << '\n';
    }

    try
    {
        x.consultaSalarioFuncionario("Carlos");
        std::cout << x.consultaSalarioFuncionario("Carlos") << "\n";
    }
    catch(const FuncionarioNaoExisteException& exp)
    {
        std::cout << "Funcionario nao existe" << '\n';
    }
    
    try
    {
        x.calculaValorTotalFolha();
        std::cout << "Total: " << x.calculaValorTotalFolha() << std::endl;
    }
    catch(const OrcamentoExtrouradoException& e)
    {
        std::cout << "Orcamento alem do esperado" << '\n';
    }
    
}
