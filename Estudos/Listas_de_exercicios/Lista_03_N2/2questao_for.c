//Implementação do FOR em linguagem C.

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int idade, i, soma_idade = 0;
    float media;
    char retorno;

    do {
system("cls");

        for(i=1; i<=5; i++){
            printf("Informe a %dª de 5 idades para calcular a média: ", i);
            scanf("%d", &idade);
            soma_idade += idade;
        }
        media = soma_idade/5;
        printf("A média das idade é %.2f anos.\n", media);

        printf("Deseja repetir a operação? [s- Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
}