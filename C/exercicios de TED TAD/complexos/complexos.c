#include <stdio.h>
#include <stdlib.h>
#include "complexos.h"

//estrutura de um complexo
typedef struct complexo Complexo;

//função para criar um complexo
Complexo* criar(float x,float y){
    Complexo* c;

    c = malloc(sizeof(Complexo));
    if(c == NULL){
        printf("Memoria insuficiente.");
        exit(1);
    }

    c->Re = x;
    c->Im = y;

    return c;
}

//função para liberar um complexo
void liberar(Complexo* a){
    free(a);
}

//função para somar dois complexos
Complexo* soma(Complexo* a,Complexo* b){
    Complexo* c;
    c = malloc(sizeof(Complexo));
    if(c == NULL){
        printf("Memoria insuficiente.");
        exit(1);
    }

    c->Re = a->Re + b->Re;
    c->Im = a->Im + b->Im;

    return c;
}

//função para multiplicar dois complexos
Complexo* multiplicar(Complexo* a,Complexo* b){
    Complexo* c;
    c = malloc(sizeof(Complexo));
    if(c == NULL){
        printf("Memoria insuficiente.");
        exit(1);
    }

    c->Re = ((a->Re * b->Re) - (a->Im * b->Im));
    c->Im = ((a->Im * b->Re) + (b->Im * a->Re));

    return c; 
}

//função para inverter um complexo
Complexo* inverte(Complexo* a){
    Complexo* c;
    c = malloc(sizeof(Complexo));
    if(c == NULL){
        printf("Memoria insuficiente.");
        exit(1);
    }

    c->Re = -1*(a->Re);
    c->Im = -1*(a->Im);

    return c;
}