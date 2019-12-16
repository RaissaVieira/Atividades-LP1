#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main(){

    RestauranteCaseiro mesas = RestauranteCaseiro();
    char op;
    int numero, quantidade;
    string descricao;
    double preco;

    while (1)
    {   
        printf("------------Menu------------\n");
        printf("[1] Cadastrar Mesa\n");
        printf("[2] Adicionar pedido\n");
        printf("[3] Consultar pedido\n");
        printf("[4] Calcular total da mesa\n");
        printf("[5] Calcular total do restaurante\n");
        printf("[6] Sair\n");

        printf("Digite uma opcao: ");
        scanf("%c", &op);

        switch (op)
        {
        case '1':

            break;
        case '2':
            printf("Numero da mesa: ");
            scanf("%d%*c", &numero);
            printf("Descricao do pedido: ");
            scanf("%s", &descricao);
            mesas.adicionaPedido(numero,descricao);
            break;
        case '3':
            printf("Numero da mesa: ");
            scanf("%d", &numero);
            printf("Pedido\n");
            mesas.ListarPedidos(numero);
            break;
        case '4':
            printf("Numero da mesa: ");
            scanf("%d", &numero);
            printf("Total: ", mesas.calculaTotalMesa(numero));
            break;
        case '5':
            printf("Total arrecadado: ", mesas.calculaTotalRestaurante());
            break;
        case '6':
            return 0;
        default:
            printf("\nInvalido\n");
            break;
        }
    
    }


    return 0;
}