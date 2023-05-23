#include <stdio.h>
#include <stdlib.h>

#define MAX 3

typedef struct
{
    int fila[MAX];
    int fim;
} Fila;
int i;

int main(void)
{
    system("cls");

    Fila f;    // Declarando a Fila
    f.fim = 0; // Inicializando a fila

    // Incluir Elemento na Fila
    f.fila[f.fim] = 10;
    f.fim++;

    f.fila[f.fim] = 180;
    f.fim++;

    f.fila[f.fim] = 100;
    f.fim++;

    // remover da fila
    printf("");
}
