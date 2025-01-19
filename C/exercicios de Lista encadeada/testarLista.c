#include <stdio.h>
#include "tad_lista.h"

int main(){
    Lista_encadeada* lista1 = lista_criar();
    Lista_encadeada* lista2 = lista_criar();
    int x = 1;


    while(x != -1){
        printf("Digite um numero para ser adcionado a lista: \n");
        scanf("%d",&x);
        if(x != -1){
            lista1 = lista_inserir(lista1,x);
        }
    }
    lista2 = lista_inserir(lista2,6);
    lista2 = lista_inserir(lista2,7);

    Lista_encadeada* lista3 = concatenar(lista1,lista2);

    lista_imprime(lista2);
    lista_imprime(lista1);
    lista_imprime(lista3);
    
    printf("d");
    lista_exclui(lista1);
    printf("d");
    return 0;
}