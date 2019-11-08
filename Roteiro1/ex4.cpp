#include <iostream>

using namespace std;

int main(){

    int camisa, quantvotos=0, melhor;
    static int numcamisa[23];

    cout << "Enquete: Quem foi o melhor jogador? (0 = fim) ";
    cin >> camisa;

    numcamisa[camisa]++;
    melhor = numcamisa[camisa];

    while(camisa != 0){
        cout << "Enquete: Quem foi o melhor jogador? (0 = fim) ";
        cin >> camisa;

        if (camisa > 23){
            cout << "Informe um valor entre 1 e 23 ou 0 para sair! " << endl;;
            continue;
        }

        numcamisa[camisa]++;

        quantvotos++;
    }
    cout << endl;
    cout << "Resultado da votacao:" << endl;
    cout << "Total de votos computados: "<< quantvotos << endl;

    for(int i=1; i<=23; i++){

        if (numcamisa[i] > melhor){
            melhor = i;
        }

        if (numcamisa[i] != 0){
            cout << "Jogador: " << i << " votos: " << numcamisa[i] << "  " << ((double)numcamisa[i]/quantvotos) *100 << "%" << endl;
        }
    }

    cout << "O melhor jogador foi o numero "<<melhor<<" com "<<numcamisa[melhor]<<" votos, correspondendo a "<<((double)numcamisa[melhor]/quantvotos)*100<<"% do total de votos." << endl;
    return 0;
}
