#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "circulo.h"


typedef struct ponto{
    float x;
    float y;
}Ponto;

typedef struct circulo{
    Ponto centro;
    float raio;
}Circulo;


//função para criar um circulo dinamicamente alocado
Circulo* cria(float x,float y,float r){
    Circulo* c = malloc(sizeof(Circulo));
    if(c == NULL){
        printf("Erro ao alocar memoria.");
        exit(1);
    }
    c->centro.x = x;
    c->centro.y = y;
    c->raio = r;

    return c;
}

//função para liberar um circulo
void libera_memoria(Circulo* c){
    free(c);
}

//função para calcular a area de um circulo
float area_circulo(Circulo* c){
    float area = pow(c->raio,2) * 3.14;
    return area; 
}

//função para descobrir se um ponto está contido no circulo
int interior(Circulo* c,Ponto a){
    int dist = sqrt(pow(c->centro.x - a.x,2) + pow(c->centro.y - a.y,2));
    if(dist < c->raio){
        return 0;
    }
    return 1;
}