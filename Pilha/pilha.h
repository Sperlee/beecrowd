typedef struct elemento{
    int info;
    struct elemento* prox;
}ElementoPilha;

typedef struct pilha{
    ElementoPilha* topo;
}Pilha;

/*criar pilha*/
Pilha* create();

/*novo elemento*/
ElementoPilha* novo_elemento(Pilha* p,int v);

/*inserir na pilha*/
Pilha* push(Pilha* p,int v);

/*retirar elemento da pilha*/
Pilha* pop(Pilha* p);

/*imprimir a pilha*/
void imprime(ElementoPilha* topo);

/*Liberar a pilha*/
void Pilha_free(Pilha* p);