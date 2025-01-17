#include <stdio.h>
#include <stdlib.h>
#define NUM_ALUNOS 5


typedef struct {
    int matricula;
    char nome[200];
    float nota_1;
    float nota_2;
    float nota_3;
}Aluno;

void armazenar_dados(Aluno *a){
    for(int i = 0;i < NUM_ALUNOS;i++){
        printf("Digite a matricula do aluno: \n");
        scanf("%d",&a[i].matricula);

        printf("Digite o nome do aluno: \n");
        scanf(" %200[^\n]",a[i].nome);

        printf("Digite a primeira nota do aluno: \n");
        scanf("%f",&a[i].nota_1);

        printf("Digite a segunda nota do aluno: \n");
        scanf("%f",&a[i].nota_2);

        printf("Digite a terceira nota do aluno: \n");
        scanf("%f",&a[i].nota_3);
    }
}

int maior_nota_1(Aluno *a){
    float maior = 0;
    for(int i = 1;i < NUM_ALUNOS;i++){
        if(a[i].nota_1 > maior){
            maior = i;
        }
    }
    return maior;
}

int maior_media(Aluno *a){
    float maior_media = (a[0].nota_1 + a[0].nota_2 + a[0].nota_3)/3;
    int aluno = 0;
    for(int i = 1;i < NUM_ALUNOS;i++){
        int media_aluno = (a[i].nota_1 + a[i].nota_2 + a[i].nota_3)/3;
        if(media_aluno > maior_media){
            maior_media = media_aluno;
            aluno = i;
        }
    }
    return aluno;
}

int menor_media(Aluno *a){
    float menor_media = (a[0].nota_1 + a[0].nota_2 + a[0].nota_3)/3;
    int aluno = 0;
    for(int i = 1;i < NUM_ALUNOS;i++){
        int media_aluno = (a[i].nota_1 + a[i].nota_2 + a[i].nota_3)/3;
        if(media_aluno > menor_media){
            menor_media = media_aluno;
            aluno = i;
        }
    }
    return aluno;
}

int apt_inap(Aluno *a){
    for(int i = 0;i < NUM_ALUNOS;i++){
        int media = (a[i].nota_1 + a[i].nota_2 + a[i].nota_3)/3;
        if(media >= 6){
            printf("O aluno %s foi aprovado.\n",a[i].nome);
        }
        else{
            printf("O aluno %s foi reprovado.\n",a[i].nome);
        }
    }
    return 0;
}

int main(){
    Aluno vetor[NUM_ALUNOS];
    armazenar_dados(vetor);
    printf("\n");
    printf("Aluno com a maior nota na primeira prova: %s\n",vetor[maior_nota_1(vetor)].nome);
    printf("Aluno com a maior media na primeira prova: %s\n",vetor[maior_media(vetor)].nome);
    printf("Aluno com a menor nota na primeira prova: %s\n",vetor[menor_media(vetor)].nome);
    printf("\n");
    apt_inap(vetor);

    return 0;
}