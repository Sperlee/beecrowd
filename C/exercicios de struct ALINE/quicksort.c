#include <stdio.h>
#include <stdlib.h>

int particao(int vetor[],int inicio,int fim){
    int pivo = vetor[inicio];
    int esquerda = inicio + 1;
    int direita = fim;
    while(esquerda <= direita){
        while (vetor[esquerda] <= pivo && esquerda <= fim){
            esquerda++;
        }
        while (vetor[direita] > pivo && direita > inicio){
            direita--;
        }
        if(esquerda < direita){
            int a = vetor[esquerda];
            vetor[esquerda] = vetor[direita];
            vetor[direita] = a;
        }
    }
    vetor[inicio] = vetor[direita];
    vetor[direita] = pivo;
    return direita;
}

int quicksort(int vetor[],int inicio,int fim){
    if(inicio < fim){
        int PosVet = particao(vetor,inicio,fim);
        quicksort(vetor,inicio,PosVet-1);
        quicksort(vetor,PosVet+1,fim);
    }
    return 0;
}


int main(){
    int vetor[5] = {4,2,1,5,3};
    quicksort(vetor,0,4);
    for(int i = 0;i < 5;i++){
        printf("%d",vetor[i]);
        printf("\n");
    }
    return 0;
}
