#include <iostream>
#include "Voo.h"
#include "Horario.h"
#include "Data.h"

using namespace std;

int main(){

    Voo voo = Voo();
    Data data = Data();
    Horario hora = Horario();

    int op, numero, lugar;
    int dia, mes, ano, hor, min, seg;

    while (1)
    { 
        cout << "__________________Menu__________________" << endl;
        cout << "\t[1] Cadastrar voo" << endl;
        cout << "\t[2] Procurar lugar mais proximo" << endl;
        cout << "\t[3] Comprar passagem" << endl;
        cout << "\t[4] Numero de vagas livres" << endl;
        cout << "\t[5] Verificar cadeira" << endl;
        cout << "\t[6] Exibir hora e data do voo" << endl;
        cout << "\t[7] Sair" << endl;

        cout << "Digite a opcao: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Numero do voo: ";
            cin >> numero;
            cout << "Hora: ?:?:? \n";
            cout << "Hora: ";
            cin >> hor;
            cout << "Minuto: ";
            cin >> min;
            cout << "Segundo: ";
            cin >> seg;
            cout << "Data: ?/?/? \n";
            cout << "Dia: ";
            cin >> dia;
            cout << "Mes: ";
            cin >> mes;
            cout << "Ano: ";
            cin >> ano;
            
            hora = Horario(hor,min,seg);
            data = Data(dia,mes,ano);

            voo = Voo(numero,hora,data);
            break;
        
        case 2:
            cout << "O lugar mais proximo e: " << voo.proximoLivre() << endl; 
            break;
        case 3:
            while (1)
            {
                cout << "Qual cadeira deseja comprar: [1 a 100] ";
                cin >> lugar;

                if(voo.ocupa(lugar)){
                    cout << "Passagem comprada" << endl;
                    break;
                }
                
                else
                {
                    cout << "Lugar ocupado" << endl;
                }
                
            }
            break;
        case 4: 
            cout << "Total de vagas livres: " << voo.vagas() << endl;
            break;
        case 5: 
            cout << "Qual cadeira voce quer visualizar: ";
            cin >> lugar;
            if (voo.verifica(lugar)){
                cout << "O lugar esta ocupado" << endl;
            }
            else
            {
                cout << "O lugar esta vazio" << endl;
            }
            
            break;
        case 6: 
            printf("Data do voo: %d/%d/%d\n", voo.getData().getDia(), voo.getData().getMes(), voo.getData().getAno());
            printf("Hora do voo: %d:%d:%d\n", voo.getHorario().getHora(), voo.getHorario().getMinuto(), voo.getHorario().getSegundo());
            break;
        case 7: 
            return 0;
        default:
            cout << "Invalido" << endl;
            break;
        }

    }
}