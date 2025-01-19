typedef struct lista{
    int info;
    struct lista* prox;
}Lista_circular_int;

//criar lista circular
Lista_circular_int* criar_lista();

//add elemento a lista circular
Lista_circular_int* inserir(Lista_circular_int* l,int v);

//imprimir lista circular
void imprimir(Lista_circular_int* l);

//remover elemento da lista circular
Lista_circular_int* remover_elemento(Lista_circular_int* l,int v);