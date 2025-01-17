#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int hora;
    int minuto;
    int segundo;
}Horario;

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    Data data;
    Horario horario;
    char texto[80];
}Compromisso;

int main(){
    Compromisso *compromisso;
    compromisso = malloc(sizeof(Compromisso));
    printf("digite o dia o mes e o ano desejado: \n");
    scanf("%d%d%d",&compromisso->data.dia,&compromisso->data.mes,&compromisso->data.ano);

    printf("digite o horario desejado: \n");
    scanf("%d%d%d",&compromisso->horario.hora,&compromisso->horario.minuto,&compromisso->horario.segundo);

    getchar();

    printf("digite seu compromisso: \n");
    scanf("%80[^\n]",compromisso->texto);

    printf("Data: %d/%d/%d\n",compromisso->data.dia,compromisso->data.mes,compromisso->data.ano);
    printf("Horario: %d:%d:%d\n",compromisso->horario.hora,compromisso->horario.minuto,compromisso->horario.segundo);
    printf("Compromisso: %s\n",compromisso->texto);

    free(compromisso);

    return 0;
}