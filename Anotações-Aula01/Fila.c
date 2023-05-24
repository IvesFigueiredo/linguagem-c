#include <stdio.h>
#include <stdlib.h>

typedef struct NO
{
    int valor;
    struct NO *proximo;
}No;

typedef struct 
{
    No *ini;
    No *fim;
    int tam;    
}Fila;

    //Funções para Fila

void criar_fila(Fila *fila)
{
    fila->ini = NULL; //Está iniciando como vazio, pois não há nenhum valor, logo o tamanho inicial deve ser 0
    fila->fim = NULL;
    fila->tam = 0;
}

void inserir_na_fila(Fila *fila, int num)
{
    No *novo = malloc(sizeof(No));
    if (novo) //Verificar se o ponteiro No foi executada
    {
        novo->valor = num;
        novo->proximo = NULL;
        if (fila->ini == NULL)
        {
            fila->ini = novo;
            fila->fim = novo;
        }
        else
        {
            fila->fim->proximo = novo;
            fila->fim = novo;
        }
        fila->tam++;
    }
    else {
        printf("\nErro ao alocar memoria.\n");
    }
}

No *remover_da_fila(Fila *fila)
{
    No *remover = NULL;

    if (fila->ini != NULL)
    {
        remover = fila->ini;
        fila->ini = remover->proximo;
        fila->tam--;
    }
    else {
        printf("\n\t**FILA VAZIA**\n");
        return remover;
    }
}

void imprimir(Fila *fila)
{
    No *aux = fila->ini;
    printf("\t---FILA---\n\t");
    while(aux)
    {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n\t---FIM DA FILA---\n");
}


int main(void) {
system("cls");



}