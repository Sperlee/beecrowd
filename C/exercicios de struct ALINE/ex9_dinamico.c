#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float Re;
    float Im;
}Complexo;

Complexo soma_complexo(Complexo* a,Complexo* b){
    Complexo soma;
    soma.Re = a->Re + b->Re;
    soma.Im = a->Im + b->Im;
    return soma;
}

Complexo subtracao_complexo(Complexo* a,Complexo *b){
    Complexo subtracao;
    subtracao.Re = a->Re - b->Re;
    subtracao.Im = a->Im - b->Im;
    return subtracao;
}

Complexo produto_complexo(Complexo* a,Complexo* b){
    Complexo produto;
    produto.Re = ((a->Re * b->Re) - (a->Im * b->Im));
    produto.Im = ((a->Im * b->Re) + (b->Im * a->Re));
    return produto; 
}

float modulo_complexo(Complexo* a){
    return sqrt(pow(a->Re,2) + pow(a->Im,2));
}

int main(){
    Complexo *Z,*W;

    Z = malloc(sizeof(Complexo));
    W = malloc(sizeof(Complexo));

    if(Z == NULL || W == NULL){
        printf("Erro na alocação de memoria.\n");
        return 1;
    }

    printf("Digite a parte real e imaginaria do complexo Z: (Re Im)\n");
    scanf("%f %f",&Z->Re,&Z->Im);
    printf("Digite a parte real e imaginaria do complexo W: (Re Im)\n");
    scanf("%f %f",&W->Re,&W->Im);

    Complexo soma = soma_complexo(Z,W);
    Complexo subtracao = subtracao_complexo(Z,W);
    Complexo produto = produto_complexo(Z,W);
    float modulo_Z = modulo_complexo(Z);
    float modulo_W = modulo_complexo(W);

    printf("Soma = %1.f + %1.fi\n",soma.Re,soma.Im);
    printf("Subtracao = %1.f + %1.fi\n",subtracao.Re,subtracao.Im);
    printf("produto = %1.f + %1.fi\n",produto.Re,produto.Im);
    printf("Modulo de z: %.2f\n",modulo_Z);
    printf("Modulo de w: %.2f",modulo_W);

    free(W);
    free(Z);

    return 0;
};
