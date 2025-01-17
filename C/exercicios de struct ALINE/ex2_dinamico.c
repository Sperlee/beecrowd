#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[200];
    int idade;
    char endereco[200];
}Dados;

int main(){
    Dados *aluno;

    aluno = malloc(sizeof(Dados));
    if(aluno == NULL){
        printf("Erro ao alocar a memoria.\n");
        return 0;
    }
    
    //digitar o nome
    printf("Digite o nome: \n");
    scanf(" %200[^\n]",aluno->nome);

    //digite a idade
    printf("Digite a idade: \n");
    scanf("%d",&aluno->idade);

    // usar o '\n' anterior **IPC**
    getchar();//somente necessário se n usar o espaço antes do [^\n].

    //digite o endereço
    printf("Digite o endereco: \n");
    scanf(" %200[^\n]",aluno->endereco);

    //prints
    printf("Nome: %s\n",aluno->nome);
    printf("Idade: %d\n",aluno->idade);
    printf("Endereco: %s\n",aluno->endereco);

    //liberar memoria
    free(aluno);
    
    return 0;

}