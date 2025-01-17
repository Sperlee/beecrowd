#include <stdio.h>
#include <stdlib.h>
#define NUM_ALUNOS 2

typedef struct{
    int matricula;
    char nome[40];
    int codigo;
    float nota1;
    float nota2;
}Aluno;

void armazenar_dados(Aluno *a){
    for(int i = 0;i < NUM_ALUNOS;i++){
        printf("Matricula do aluno: ");
        scanf("%d",&a[i].matricula);

        printf("Nome do aluno: ");
        scanf(" %40[^\n]",a[i].nome);

        printf("Codigo da disciplina: ");
        scanf("%d",&a[i].codigo);

        printf("Nota 1 do aluno: ");
        scanf("%f",&a[i].nota1);

        printf("Nota 2 do aluno: ");
        scanf("%f",&a[i].nota2);

        printf("\n");

    }
}

void planilha_final(Aluno *a){
    printf("%-20s %-20s %-10s\n", "Matricula", "Nome", "Media");
    for(int i = 0;i < NUM_ALUNOS;i++){
        printf("%-20d %-20s %-10.1f\n",a[i].matricula,a[i].nome,(a[i].nota1+a[i].nota2)/2);
    }
}

int main(){
    Aluno vetor[NUM_ALUNOS];
    armazenar_dados(vetor);
    planilha_final(vetor);

    return 0;
}