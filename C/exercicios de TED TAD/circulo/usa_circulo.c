#include <stdio.h>
#include "circulo.h"

int main(){
    Circulo *c = cria(2,1,5);
    printf("A area do circulo e: %.1f\n",area_circulo(c));
    libera_memoria(c);
    return 0;
}