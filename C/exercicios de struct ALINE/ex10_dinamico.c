#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM_PESSOAS 2

typedef struct{
    char nome[30];
    char endereco[30];
    int telefone;
}Dados;

int main(){
    Dados pessoas[NUM_PESSOAS];

    for(int i = 0;i < NUM_PESSOAS;i++){
        printf("Digite o nome: ");
        scanf(" %[^\n]",pessoas[i].nome);
        printf("Digite o endereco: ");
        scanf(" %[^\n]",pessoas[i].endereco);
        printf("Digite o numero de telefone: ");
        scanf("%d",&pessoas[i].telefone);

        while(pessoas[i].telefone > 999999999 || pessoas[i].telefone < 900000000){
            printf("Numero invalido,digite novamente: ");
            scanf("%d",&pessoas[i].telefone);
        }
    }
    Dados temp;
    for(int i = 0;i < NUM_PESSOAS-1;i++){
        for(int j = 0;j < NUM_PESSOAS-i-1;j++){
            if(strcmp(pessoas[j].nome, pessoas[j+1].nome) > 0){
                temp = pessoas[j];
                pessoas[j] = pessoas[j+1];
                pessoas[j+1] = temp;
            }
        }
    }
    printf("   %-20s %-20s %-20s   \n","Nome","Endereco","Telefone");
    for(int i = 0;i < NUM_PESSOAS;i++){
        printf("   %-20s %-20s %-20d   \n",pessoas[i].nome,pessoas[i].endereco,pessoas[i].telefone);
    }
    return 0;
}
