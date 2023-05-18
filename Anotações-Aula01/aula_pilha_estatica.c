
#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct {
    int posicao[TAM];
    int topo;
}Pilha;

int main() {
// Declarando a variavel que representa a estrutura da pilha.
    Pilha p;

    p.topo = 0;
// Empilhar elementos

    p.posicao[p.topo] = 12;
    p.topo++;
    printf("\nO elemento inserido na pilha é: %d\n", p.posicao[p.topo-1]);
    printf("\nO topo da pilha é a posição: %i\n", p.topo);

    p.posicao[p.topo] = 18;
    p.topo++;
    printf("\nO elemento inserido na pilha é: %d\n", p.posicao[p.topo-1]);
    printf("\nO topo da pilha é a posição: %i\n", p.topo);

// Desemplilhar elementos

    p.topo--;
    printf("\nElemento removido: %d", p.posicao[p.topo]);
    printf("\nO topo agora é %d", p.posicao[p.topo - 1]);

    p.topo--;
    printf("\nElemento removido: %d", p.posicao[p.topo]);
    printf("\nO topo agora é %d\n", p.posicao[p.topo - 1]);
system("pause");
}

