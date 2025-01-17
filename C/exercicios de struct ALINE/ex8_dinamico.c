#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Nascimento;

typedef struct{
    char nome[40];
    int idade;
    char sexo;
    int cpf;
    Nascimento data;
    int codigo;
    char cargo[30];
    float salario;
}Dados;

int main(){
    Dados *funcionario;

    funcionario = malloc(sizeof(Dados));
    if(funcionario == NULL){
        printf("Erro na alocacao de memoria.");
        return 1;
    }


    printf("Digite o nome: ");
    scanf("%40[^\n]",funcionario->nome);
    printf("Digite a idade: ");
    scanf("%d",&funcionario->idade);
    printf("Digite 'M' para masculino ou 'F' para feminino: ");
    scanf(" %c",&funcionario->sexo);
    printf("Digite o CPF: ");
    scanf("%d",&funcionario->cpf);
    printf("Digite a data de nascimento: ");
    scanf("%d %d %d",&funcionario->data.dia,&funcionario->data.mes,&funcionario->data.ano);
    printf("Digite o codigo do setor: ");
    scanf("%d",&funcionario->codigo);
    printf("Digite o cargo que ocupa: ");
    scanf(" %30[^\n]",funcionario->cargo);
    printf("Digite o salario: ");
    scanf("%f",&funcionario->salario);


    printf("\n--- Dados do Funcionário ---\n");
    printf("Nome: %s\n", funcionario->nome);
    printf("Idade: %d\n", funcionario->idade);
    printf("Sexo: %c\n", funcionario->sexo);
    printf("CPF: %d\n", funcionario->cpf);
    printf("Data de Nascimento: %02d/%02d/%04d\n", funcionario->data.dia, funcionario->data.mes, funcionario->data.ano);
    printf("Código do Setor: %d\n", funcionario->codigo);
    printf("Cargo: %s\n", funcionario->cargo);
    printf("Salário: %.2f\n", funcionario->salario);

    free(funcionario);
    
    return 0;
}