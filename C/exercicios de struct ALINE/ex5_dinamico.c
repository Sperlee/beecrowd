#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float x;
    float y;
    float z;
}Vetor;

int main(){
    Vetor *V1,*V2,*V3;

    V1 = malloc(sizeof(Vetor));
    V2 = malloc(sizeof(Vetor));
    V3 = malloc(sizeof(Vetor));

    if(V1 == NULL || V2 == NULL || V3 == NULL){
        printf("Erro ao alocar memoria.\n");
        return 0;
    }

    printf("Digite as coordenadas do primeiro vetor: (x,y,z)\n");
    scanf("%f%f%f",&V1->x,&V1->y,&V1->z);

    printf("Digite as coordenadas do segundo vetor: (x,y,z)\n");
    scanf("%f%f%f",&V2->x,&V2->y,&V2->z);

    V3->x = (V1->x + V2->x);
    V3->y = (V1->y + V2->y);
    V3->z = (V1->z + V2->z);

    printf("As coordenadas do vetor soma sao (%.1f,%.1f,%.1f).\n",V3->x,V3->y,V3->z);

    free(V1);
    free(V2);
    free(V3);

    return 0;
}
