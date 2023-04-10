        //Programa para verificar condição do número (Par ou Immpar) 

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1;

    printf("Para verificar se o número é par ou ímpar.\nInforme um número:\n");
    scanf("%d", &num1);

    if ( num1%2 ==0 && num1 !=0) {
        printf("É par.\n");
    } else if (num1 == 0) {
        printf("É nulo.\n");
    } else {
        printf("É impar.\n");
    }
}