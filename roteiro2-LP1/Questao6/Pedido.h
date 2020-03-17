#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido
{
    public:
        Pedido();
        Pedido(std::string desc, int quant, double preco);
        std::string toString();
        int getQuant();
        void setQuant(int q);
        std::string getDescricao();
        double getPreco();

    private:
        int num;
        int quant;
        double preco;
        std::string descricao;
        static int quantAtualPedidos;

};

#endif // PEDIDO_H
