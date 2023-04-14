// Implementação do FOR na Liguagem C.

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int idade = 0, i, soma_idade=0;
    char retorno;
    do {
system("cls");

        for (i=1; i<=5; i++) {
            printf("Informe a %dª idade: ", i);
            scanf("%d", &idade);
            soma_idade += idade;
        }
    printf("A soma das idades é %d.\n", soma_idade);

    printf("Deseja repetir a operação? [ s- Sim | n - Não ]\n");
    scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
}