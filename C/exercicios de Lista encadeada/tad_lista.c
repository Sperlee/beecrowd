#include <stdio.h>
#include <stdlib.h>
#include "tad_lista.h"


typedef struct lista Lista_encadeada;

Lista_encadeada* lista_criar(){
    return NULL;
}

Lista_encadeada* lista_inserir(Lista_encadeada* l,int i){
    Lista_encadeada* novo = malloc(sizeof(Lista_encadeada));

    if(novo == NULL){
        printf("Memoria insuficiente.");
        exit(1);
    }

    novo->info = i;
    novo->prox = l;

    return novo;
}

void lista_exclui(Lista_encadeada* l){
    while (l != NULL){
        Lista_encadeada* t = l->prox;

        free(l);
        l = t;
    }
}

void lista_imprime(Lista_encadeada* l) {
    Lista_encadeada* p = l;

    printf("Imprimindo a lista:\n");
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->prox;
    }
    //printf("NULL\n");
}

Lista_encadeada* buscar_elemento(Lista_encadeada* t,int v){
    Lista_encadeada* p = t;
    if(p == NULL){
        printf("Memoria insuficiente.");
        exit(1);
    }
    while(p != NULL){
        if(p->info == v){
            return p;
        }
        p = p->prox;
    }
    return NULL;
}

Lista_encadeada* excluir_elemento(Lista_encadeada* t,int v){
    Lista_encadeada* p = t;
    Lista_encadeada* ant = NULL;
    while(p != NULL && p->info != v){
        ant = p;
        p = p->prox;
    }
    if(ant == NULL){
        t = p->prox;
    }
    if(p == NULL){
        return t; 
    }
    else{
        ant->prox = p->prox;
    }

    free(p);
    return t;
}

Lista_encadeada* ordenar(Lista_encadeada* l,int v){
    Lista_encadeada* ant = NULL;
    Lista_encadeada* novo = malloc(sizeof(Lista_encadeada));
    Lista_encadeada* inicio = l;
    novo -> info = v;
    
    while(l != NULL && l->info < v){
        ant = l;
        l = l->prox;
    }

    if(ant == NULL){
        novo->prox = l;
        return novo;
    }

    else{
        novo->prox = ant->prox;
        ant->prox = novo;
    }
    return inicio;

}

Lista_encadeada* dividir_metade(Lista_encadeada* l){
    Lista_encadeada* p = l;
    int cont = 0;
    Lista_encadeada* prev = NULL;

    while(p != NULL){
        p = p->prox;
        cont++;
    }
    p = l;
    for(int i =0;i < cont/2;i++){
        prev = p;
        p = p->prox;
    }
    if(prev != NULL){
        prev->prox = NULL;
    }
    return p;
}

Lista_encadeada* dividir_elemento(Lista_encadeada* l,int v){
    Lista_encadeada* p = l;
    int cont = 0;
    if(p == NULL){
        printf("lista vazia.");
        exit(1);
    }
    while(p->info != v && p != NULL){
        p = p->prox;
        cont++;
    }
    p = l;
    for(int i = 0;i< cont;i++){
        p = p->prox;
    }
    return p;
}

Lista_encadeada* concatenar(Lista_encadeada* l,Lista_encadeada* t){
    if(t == NULL){
        return l;
    }
    if(l == NULL){
        return t;
    }

    Lista_encadeada* x = t;
    while(x->prox != NULL){
        x = x->prox;
    }
    x->prox = l;

    return t;
}

Lista_encadeada* lista_vetor(Lista_encadeada* l,int vetor[],int tamanho){
    l = lista_criar();
    for(int i = 0;i < tamanho;i++){
        l = lista_inserir(l,vetor[i]);
    }

    return l;
}

int contar_lista(Lista_encadeada*l){
    int cont = 0;
    while(l != NULL){
        l = l->prox;
        cont++;
    }
    return cont;
}

Lista_encadeada* lista_insere_final(Lista_encadeada* l,int v){
    Lista_encadeada* novo = malloc(sizeof(Lista_encadeada));

    novo->prox = NULL;
    novo->info = v;

    if(l == NULL){
        return novo;
    }

    Lista_encadeada* percorre = l;
    while(percorre->prox != NULL){
        percorre = percorre->prox;
    }

    percorre->prox = novo;

    return l;
}

Lista_encadeada* lista_insere_posicao(Lista_encadeada* l,int v,int pos){
    Lista_encadeada* novo = malloc(sizeof(Lista_encadeada));
    Lista_encadeada* temp = l;
    novo->info = v;

    int cont = 0;

    if(l == NULL && pos != 1){
        printf("Impossivel");
        exit(1);
    }

    while(cont != pos && temp != NULL){
        temp = temp->prox;
        cont++;
    }

    novo->prox = temp->prox;
    temp->prox = novo;

    return l;
}

Lista_encadeada* remove_elementos_iguais(Lista_encadeada* l,int v){
    Lista_encadeada* temp = l;
    Lista_encadeada* ant = NULL;
    if(temp == NULL){
        return l;
    }
    while(temp->info == v){
        l = temp->prox;
        free(temp);
        temp = l;
    }

    while(temp != NULL){
        if(temp->info == v){
            ant->prox = temp->prox;
            free(temp);
            temp = ant->prox;
        }
        else{
            ant = temp;
            temp = temp->prox;
        }
    }

    return l;    
}

Lista_encadeada* insere_elementos_antes_depois(Lista_encadeada*l,int v,int X){
    Lista_encadeada* N1 = malloc(sizeof(Lista_encadeada));
    Lista_encadeada* N2 = malloc(sizeof(Lista_encadeada));
    Lista_encadeada* temp = l;
    Lista_encadeada* ant = NULL;

    if(N1 == NULL || N2 == NULL ){
        printf("Memoria insuficiente");
        exit(1);
    }

    N1->info = v;
    N2->info = v;

    while (temp->info != X && temp != NULL){
        ant = temp;
        temp = temp->prox;
    }

    if(temp == NULL){
        printf("Impossivel pois elemento X n exsite");
        return l;
    }

    if(ant == NULL){
        N1->prox = temp;
        temp = N1;
    }
    else{
        N1->prox = ant->prox;
        ant->prox = N1;
    }
    N2->prox = temp->prox;
    temp->prox = N2;

    return l;
    
}

