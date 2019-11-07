#include <iostream>

using namespace std;

int main(){

    int x, maior;

    cout << "Digite um numero: " << endl;
    cin >> x;

    maior = x;

    while(1){

        cout << "Digite um numero: " << endl;
        cin >> x;

        if(x == 0)
            break;

        if (x > maior)
            maior = x;
    }

    cout << "o maior numero digitado foi: " << maior << endl;

    return 0;
}
