//Nome: Ives Gabriel Figueiredo Santos Pinto
//Questão 02 - Lista 01 

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1;
    char retorno;

    do {
system("cls");
        printf("Para verificar se o número é par ou ímpar.\nInforme um número:\n");
        scanf("%d", &num1);

        if ( num1%2 ==0 && num1 !=0) {
            printf("É par.\n");
        } else if (num1 == 0) {
            printf("É nulo.\n");
        } else {
            printf("É impar.\n");
        }

        printf("Deseja realizar outra operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    }while (retorno != 'n' && retorno != 'N');
return 0;
}