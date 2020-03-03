/*
 *Definimos Polimorfismo como um princípio a partir do qual as 
 *classes derivadas de uma única classe base são capazes de invocar 
 *os métodos que, embora apresentem a mesma assinatura, comportam-se 
 *de maneira diferente para cada uma das classes derivadas.
 */

#include "animais.h"
#include "vaca.h"
#include "gato.h"

int main(){
    animais *a1 = new vaca();
    animais *a2 = new gato();

    a1->alimento();
    a2->alimento();

}