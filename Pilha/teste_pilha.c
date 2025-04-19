#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    Pilha* k = create(); 
    k = push(k,1);
    k = push(k,2);
    k = push(k,3);

    imprime(k->topo);

    k = pop(k);
    k = pop(k);

    imprime(k->topo);
    return 0;
}