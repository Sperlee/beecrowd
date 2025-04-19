#include <stdio.h>
#include <stdlib.h>
#include "tad_lista_circular.h"

int main(){
    Lista_circular_int* lista = criar_lista();

    lista = inserir(lista,1);
    lista = inserir(lista,2);
    lista = inserir(lista,3);
    lista = inserir(lista,4);
    imprimir(lista);

    lista = remover_elemento(lista,2);  

    imprimir(lista);
}