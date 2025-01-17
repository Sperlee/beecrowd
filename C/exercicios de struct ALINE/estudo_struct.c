#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//estrutura simples de coordenadas
typedef struct{
    float x;
    float y; 
}Ponto;

//estrutura com o centro e o raio de um circulo
typedef struct{
    Ponto centro;
    float raio;
}Circulo;


//função que mede a distância entre dois pontos
float distancia(Ponto *p1,Ponto *p2){
    float dist;
    dist = sqrt(pow(p2->x - p1->x,2) + pow(p2->y - p1->y,2));
    return dist;
}

int main(){
    Circulo c;
    Ponto *P1,*P2;
    printf("Digite as coordenadas e o raio do circulo: \n");
    scanf("%f %f %f",&c.centro.x,&c.centro.y,&c.raio);
    printf("%.2f %.2f %.2f\n",c.centro.x,c.centro.y,c.raio);

    //alocando a memoria necessária para os ponteiros
    P1 = malloc(sizeof(Ponto));
    P2 = malloc(sizeof(Ponto));

    //testando se as memorias foram alocadas corretamente
    if(P1 == NULL || P2 == NULL){
        printf("Erro com a memoria.\n");
        return 0;
    }

    P1 = &c.centro;
    printf("Digite as coordenadas do outro ponto: \n");
    scanf("%f %f",&P2->x,&P2->y);
    printf("%.2f",distancia(P1,P2));


    //liberação de memoria para evitar "VAZAMENTO" de memoria
    free(P1);
    free(P2);

    return 0;
}
