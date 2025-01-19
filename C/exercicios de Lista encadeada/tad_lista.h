//estrutura lista
typedef struct lista{
    int info;
    struct lista* prox; 
}Lista_encadeada;


//função criar lista
Lista_encadeada* lista_criar();

//função para inserir elemento na lista encadeada
Lista_encadeada* lista_inserir(Lista_encadeada* l,int i);

//função para excluir elementos da lista encadeada
void lista_exclui(Lista_encadeada* l);

//função para imprimir os elementos da lista encadeada
void lista_imprime(Lista_encadeada* l);

//função para encontrar um elemento na lista encadeada
Lista_encadeada* buscar_elemento(Lista_encadeada* t,int v);

//função para excluir elemente de uma lista
Lista_encadeada* excluir_elemento(Lista_encadeada* t,int v);

//função para inserir um elemento de maneira ordenada na lista encadeada
Lista_encadeada* ordenar(Lista_encadeada* l,int v);

//função para dividir a lista em duas partes e retornar a segunda parte
Lista_encadeada* dividir_metade(Lista_encadeada* l);

//função para dividir a lista por um elemento
Lista_encadeada* dividir_elemento(Lista_encadeada* l,int v);

//função para concatenar listas
Lista_encadeada* concatenar(Lista_encadeada* l,Lista_encadeada* t);//as duas listas viram uma só e a lista t deixa de existir

// função para criar uma lista encadeada a partir de um vetor
Lista_encadeada* lista_vetor(Lista_encadeada* l,int vetor[],int tamanho);

//função para contar elementos da lista encadeada
int contar_lista(Lista_encadeada*l);

//função para inserir no fim
Lista_encadeada* lista_insere_final(Lista_encadeada* l,int v);

//função para inserir elemento em uma certa posição
Lista_encadeada* lista_insere_posicao(Lista_encadeada* l,int v,int pos);

//função para remover todos os elementos iguais a um parametro
Lista_encadeada* remove_elementos_iguais(Lista_encadeada* l,int v);

//função para inserir elemento antes e depois de um elemento X
Lista_encadeada* insere_elementos_antes_depois(Lista_encadeada*l,int v,int X);