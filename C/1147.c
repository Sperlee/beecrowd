#include <stdio.h>

typedef struct {
    char letra;
    char numero;
}Casa;


void criar_lista(char *casa,Casa *lista_de_casas_totais){
    for(int i = 0;i < 9;i++){
        scanf("%2s",casa);
        lista_de_casas_totais[i].letra = casa[0];
        lista_de_casas_totais[i].numero = casa[1];
    }
}


void movimentos_cavalo(Casa *vetor,Casa *casas_cavalo){
    casas_cavalo[0].numero = (vetor[0].numero)-2;
    casas_cavalo[0].letra = (vetor[0].letra)-1; 

    casas_cavalo[1].numero = (vetor[0].numero)-1;
    casas_cavalo[1].letra = (vetor[0].letra)-2; 

    casas_cavalo[2].numero = (vetor[0].numero)+1;
    casas_cavalo[2].letra = (vetor[0].letra)-2; 

    casas_cavalo[3].numero = (vetor[0].numero)+2;
    casas_cavalo[3].letra = (vetor[0].letra)-1; 

    casas_cavalo[4].numero = (vetor[0].numero)+2;
    casas_cavalo[4].letra = (vetor[0].letra)+1; 

    casas_cavalo[5].numero = (vetor[0].numero)+1;
    casas_cavalo[5].letra = (vetor[0].letra)+2; 

    casas_cavalo[6].numero = (vetor[0].numero)-1;
    casas_cavalo[6].letra = (vetor[0].letra)+2; 

    casas_cavalo[7].numero = (vetor[0].numero)-2;
    casas_cavalo[7].letra = (vetor[0].letra)+1; 

}


void movimentos_peao(Casa *vetor,Casa *casas_peao){
    int a = 0;
    for(int i = 1;i < 9;i++){
        casas_peao[a].numero = (vetor[i].numero)-1;
        casas_peao[a].letra = (vetor[i].letra)-1;
        a++;
        casas_peao[a].numero = (vetor[i].numero)-1;
        casas_peao[a].letra = (vetor[i].letra)+1;
        a++;
    }
}



void comparar(Casa *casas_cavalo,Casa *casas_peoes){
    Casa nula;
    nula.numero = '0';
    nula.letra = '0';
    for(int i = 0; i < 8; i++) {
        if ((casas_cavalo[i].numero < '1' || casas_cavalo[i].numero > '8') || 
            (casas_cavalo[i].letra < 'a' || casas_cavalo[i].letra > 'h')) {
            casas_cavalo[i].numero = '0'; // Mark invalid positions explicitly
            casas_cavalo[i].letra = '0';
        }
    }
    
    for(int i =0;i<16;i++){
        if((casas_peoes[i].numero < '1' || casas_peoes[i].numero > '8')||(casas_peoes[i].letra < 'a' || casas_peoes[i].letra > 'h')){
            casas_peoes[i] = nula;
        }
    }

    int cont = 0;

    for(int i =0;i<8;i++){
        for(int j = 0;j < 16;j++){
            if ((casas_cavalo[i].numero == casas_peoes[j].numero && casas_cavalo[i].letra == casas_peoes[j].letra) && casas_cavalo[i].numero != nula.numero && casas_cavalo[i].letra != nula.letra){
                cont++;
                break;
            }
        }
    }

    printf("%d",cont);
}


int main(){
    char casa[3];
    Casa lista_de_casas_totais[9];
    criar_lista(casa,lista_de_casas_totais);
    Casa casas_cavalo[8];
    movimentos_cavalo(lista_de_casas_totais,casas_cavalo);
    Casa casas_peoes[16];
    movimentos_peao(lista_de_casas_totais,casas_peoes);
    
    for(int i = 0;i<16;i++){
        printf("%c%c\n",casas_peoes[i].letra,casas_peoes[i].numero);
    }


    comparar(casas_cavalo,casas_peoes);
    
}