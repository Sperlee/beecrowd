#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float raio;
    float argumento;
}Polar;

typedef struct {
    float x;
    float y;
}Cartesiano;

int main(){
    Polar *P;
    Cartesiano *C;

    P = malloc(sizeof(Polar));
    C = malloc(sizeof(Cartesiano));
    if(P == NULL || C == NULL){
        printf("Erro ao alocar memoria.\n");
        return 0;
    }

    printf("Digite o raio: ");
    scanf("%f",&P->raio);
    printf("Digite o argumento em radianos: ");
    scanf("%f",&P->argumento);

    C->x = P->raio * cos(P->argumento);
    C->y = P->raio * sin(P->argumento);

    printf("%.2f\n",C->x);
    printf("%.2f\n",C->y);

    free(P);
    free(C);

    return 0;
}