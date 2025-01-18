/*TAD circulo*/

//Struct do ponto 
typedef struct ponto{
    float x;
    float y;
}Ponto;

//Struct do circulo
typedef struct circulo{
    Ponto centro;
    float raio;
}Circulo;

//Função para criar um circulo dinamicamente alocado
Circulo* cria(float x,float y,float r);

//Função para liberar o circulo
void libera_memoria(Circulo* c);

//Função para calcular a área do circulo
float area_circulo(Circulo* c);

//Função para saber se um ponto está contido no circulo
int interior(Circulo* c,Ponto a);