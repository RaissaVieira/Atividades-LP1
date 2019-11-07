#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int GerarNumero(){
    return rand() % 101;
}

int main(){

    int num, aleatorio;

    srand(time(NULL));

    aleatorio = GerarNumero();

    while(aleatorio != num){
        cout << "Digite um numero entre 0 e 100" << endl;
        cin >> num;

        if(aleatorio > num){
            cout << "Muito baixo. Tente novamente" << endl;
        }
        else if (aleatorio < num){
            cout << "Muito alto. Tente novamente" << endl;
        }
    }

    return 0;
}
