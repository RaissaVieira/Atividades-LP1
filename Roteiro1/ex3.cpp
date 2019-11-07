#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int GerarNumero(){
    return rand() % 6 + 1;
}

int main(){

    int quant, aleatorio, total;
    int n1, n2, n3, n4, n5, n6;

    n1 = n2 = n3 = n4 = n5 = n6 = 0;

    cout << "Digite a quantidade de lancamentos a serem realizados: " << endl;
    cin >> quant;

    total = quant;

    srand(time(NULL));

    while(quant != 0){

        //srand(time(NULL));
        aleatorio = GerarNumero();


        printf("%d", aleatorio, quant);

        if(aleatorio == 1)
            n1++;
        else if(aleatorio == 2)
            n2++;
        else if(aleatorio == 3)
            n3++;
        else if(aleatorio == 4)
            n4++;
        else if(aleatorio == 5)
            n5++;
        else if(aleatorio == 6)
            n6++;

        quant--;
    }
        cout << "Percentual de 1 " << ((double)n1/total)*100 << endl;

        cout << "Percentual de 2 " << ((double)n2/total)*100 << endl;
        cout << "Percentual de 3 " << ((double)n3/total)*100 << endl;
        cout << "Percentual de 4 " << ((double)n4/total)*100 << endl;
        cout << "Percentual de 5 " << ((double)n5/total)*100 << endl;
        cout << "Percentual de 6 " << ((double)n6/total)*100 << endl;



    return 0;
}
