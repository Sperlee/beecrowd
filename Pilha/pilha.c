#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha* create(){
    Pilha* novo_pilha = (Pilha*)malloc(sizeof(Pilha));
    novo_pilha->topo = NULL;
    return novo_pilha;
}


ElementoPilha* novo_elemento(Pilha* p,int v){
    ElementoPilha* novo = (ElementoPilha*)malloc(sizeof(ElementoPilha));
    novo->info = v;
    novo->prox = p->topo;
    return novo;
}

Pilha* push(Pilha* p,int v){
    p->topo = novo_elemento(p,v);
    return p;
}

Pilha* pop(Pilha* p){
    if(p == NULL || p->topo == NULL){
        return p;
    }
    ElementoPilha* poped = p->topo;
    p->topo = poped->prox;
    free(poped);
    return p;
}


//Ajeitar essa função de impressão(Parametro Pilha e n recurssão estou usando ElementoPilha)
void imprime(ElementoPilha* topo){
    if(topo == NULL){
        return;
    }
    imprime(topo->prox);
    printf("%d ",topo->info);
}