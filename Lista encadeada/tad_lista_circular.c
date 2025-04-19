#include <stdio.h>
#include <stdlib.h>
#include "tad_lista_circular.h"

Lista_circular_int* criar_lista(){
    return NULL;
}

Lista_circular_int* inserir(Lista_circular_int* l,int v){
    Lista_circular_int* novo = malloc(sizeof(Lista_circular_int));
    novo->info = v;
    if(novo == NULL){
        printf("Memoria insuficiente");
        exit(1);
    }

    if(l == NULL){
        novo->prox = novo;
        return novo;
    }

    else{
        Lista_circular_int* temp =l;
        while(temp->prox != l){
            temp = temp->prox;
        }
        temp->prox = novo;
        novo->prox = l;
    }
    return l;
}

void imprimir(Lista_circular_int* l){
    Lista_circular_int* temp = l;

    if(1) do{
        printf("%d \n",temp->info);
        temp = temp->prox;
    }while(temp != l);
}

Lista_circular_int* remover_elemento(Lista_circular_int* l,int v){
    Lista_circular_int* temp = l;
    Lista_circular_int* ant = NULL;
    if(1) do{
        ant = temp;
        temp = temp->prox;
    }while(temp->info != v && temp != l);

    if(temp == l){
        printf("Valor nao encontrado na lista\n");
        return l;
    }
    else{
        ant->prox = temp->prox;
        free(temp);
        return l;
    }
}