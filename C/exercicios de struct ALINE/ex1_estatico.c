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
    Data D;
    Horario H;
    char texto[80];
}Compromisso;

int main(){
    Compromisso C;
    C.D.dia = 15;
    C.D.mes = 01;
    C.D.ano = 2025;
    C.H.hora = 22;
    C.H.minuto = 26;
    C.H.segundo = 20;
    scanf("%80[^\n]",C.texto);
    printf("%s",C.texto);
}