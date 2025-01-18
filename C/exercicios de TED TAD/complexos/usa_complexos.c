#include <stdio.h>
#include <stdlib.h>
#include "complexos.h"

int main(){
    Complexo* Z = criar(1,2);
    Complexo* W = criar(2,1);

    Complexo* Soma = soma(Z,W);
    Complexo* Produto = multiplicar(Z,W);
    Complexo* inverte_Z = inverte(Z);
    Complexo* inverte_W = inverte(W);

    printf("Soma = %.1f + (%.1f)i\n", Soma->Re, Soma->Im);
    printf("Produto = %.1f + (%.1f)i\n", Produto->Re, Produto->Im);
    printf("Inverso de Z = %.1f + (%.1f)i\n", inverte_Z->Re, inverte_Z->Im);
    printf("Inverso de W = %.1f + (%.1f)i\n", inverte_W->Re, inverte_W->Im);


    liberar(Z);
    liberar(W);
    liberar(Soma);
    liberar(Produto);
    liberar(inverte_Z);
    liberar(inverte_W);
}