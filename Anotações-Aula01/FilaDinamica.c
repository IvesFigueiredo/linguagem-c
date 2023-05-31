#include <stdio.h>
#include <stdlib.h>

typedef struct NO
{
    int valor;
    struct NO *proximo;
} No;

typedef struct
{
    No *ini;
    No *fim;
    int tam;
} Fila;

// Funções para Fila Dinâmica

void criar_fila(Fila *fila)
{
    fila->ini = NULL; // Está iniciando como vazio, pois não há nenhum valor, logo o tamanho inicial deve ser 0
    fila->fim = NULL;
    fila->tam = 0;
}

void inserir_na_fila(Fila *fila, int num)
{
    No *novo = malloc(sizeof(No));
    if (novo) // Verificar se o ponteiro No foi executada
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
    else
    {
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
    else
    {
        printf("\n\t**FILA VAZIA**\n");
        return remover;
    }
}

void imprimir(Fila *fila)
{
    No *aux = fila->ini;
    printf("\t---FILA---\n\t");
    while (aux)
    {
        printf("%d ", aux->valor);
        aux = aux->proximo;
    }
    printf("\n\t---FIM DA FILA---\n");
}

int main(void)
{
    system("cls");

    No *r;
    Fila fila;
    int opcao, valor;

    criar_fila(&fila);

    do
    {
        printf("\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\n\t0 - Finalizar\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor: ");
            scanf("%d", &valor);
            inserir_na_fila(&fila, valor);
            break;
        case 2:
            r = remover_da_fila(&fila);
            if (r)
            {
                printf("Item Removido: %d\n", r->valor);
                free(r);
            }
            break;
        case 3:
            imprimir(&fila);
            break;
        default:
            if (opcao > 3)
                printf("\nOpcao inválida!\n");
        }

    } while (opcao != 0);
    printf("\n###Programa finalizado###\n");

    return 0;
}