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
    printf("Elemento removido da fila: %d\n", f.fila[0]);
    f.fila[0] = f.fila[1];  //realiza o deslocamento da segunda posição para a primeira posição
    f.fila[1] = f.fila[2]; //realiza a deslocamento da 3° posição para a 2° posição
    f.fim--;

    // removendo o segundo elemento fila
    printf("Elemento removido da fila: %d\n", f.fila[0]);
    f.fila[0] = f.fila[1]; //realiza o deslocamento
    f.fila[1] = f.fila[2];
    f.fim--;

    printf("Elemento removido da fila: %d\n", f.fila[0]);
    f.fila[0] = f.fila[1]; // realiza o deslocamento
    f.fim--;
}
