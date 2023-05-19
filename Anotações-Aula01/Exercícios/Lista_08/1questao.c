/*
Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Lista 08, referente ao assunto de pilha.
*/
#include <stdio.h>
#include <stdlib.h>

#define TAM 20

typedef struct
{
    int posicao[TAM];
    int topo;
} Pilha;

Pilha p;
int caso;
char r;

void fimPrograma()
{
    printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n");
}

int main(void)
{
    p.topo = 0;
    int i = 0;
    do
    {
        system("cls");
        printf("\t\tPrograma para implementar 20 valores inteiros em uma pilha para empilha e remover  os elementos da pilha.\n\n");

        printf("Deseja implementar ou remover dados? [ 1 - Implementar | 2 - Remover ]");
        scanf("%d", &caso);

        switch (caso)
        {
        case 1:
            while (p.topo < 20)
            {
                printf("\nInforme o %dº número para implementar: ", i + 1);
                scanf("%d", &p.posicao[p.topo]);
                printf("O valor armazenado é, %d\n", p.posicao[p.topo]);
                i++;
                p.topo++;
                break;
            }
            if (i == 20)
            {
                printf("\nO armazenamento está lotado.\n");
            }
            break;
        case 2:
            while (p.topo > 0)
            {
                i--;
                printf("\nO valor, %d foi removido.\n", p.posicao[p.topo - 1]);
                p.topo--;
                printf("Há %d números salvos.\n", i);
                break;
            }
            if (i == 0)
            {
                printf("\nNão há mais valores na pilha.\n");
            }
            break;
        }
        printf("\nDeseja realizar outra operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &r);
    } while (r != 'n' && r != 'N');
    fimPrograma();
}