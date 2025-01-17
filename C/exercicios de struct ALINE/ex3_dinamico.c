#include <stdio.h>
#include <stdlib.h>
#define NUM_ALUNOS 5


typedef struct {
    char nome[200];
    int idade;
    char endereco[200];
}Aluno;

int main(){
    Aluno vetor[NUM_ALUNOS];
    
    //armazenando dados
    for(int i = 0;i < NUM_ALUNOS;i++){
        printf("Digite o Nome do aluno %d: \n",i+1);
        scanf(" %200[^\n]",vetor[i].nome);

        printf("Digite a idade do aluno %d: \n",i+1);
        scanf("%d",&vetor[i].idade);

        printf("Digite o endereco do aluno %d: \n",i+1);
        scanf(" %200[^\n]",vetor[i].endereco);
    }

    //printando dados
    for(int i = 0;i < NUM_ALUNOS;i++){
        printf("\n");
        printf("-------%d-------\n",i+1);
        printf("Nome do aluno: %s\n",vetor[i].nome);
        printf("Idade do aluno: %d\n",vetor[i].idade);
        printf("Endereco do aluno: %s\n",vetor[i].endereco);
        printf("----------------\n");
        printf("\n");
    }

    return 0;
    
}
