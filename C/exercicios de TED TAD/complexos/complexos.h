#ifndef COMPLEXOS_H
#define COMPLEXOS_H

// Definição completa da estrutura Complexo
typedef struct complexo {
    float Re;
    float Im;
} Complexo;

// Funções para manipulação dos complexos
Complexo* criar(float x, float y);
void liberar(Complexo* a);
Complexo* soma(Complexo* a, Complexo* b);
Complexo* multiplicar(Complexo* a, Complexo* b);
Complexo* inverte(Complexo* a);

#endif // COMPLEXOS_H
