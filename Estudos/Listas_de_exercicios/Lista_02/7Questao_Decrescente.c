        //Programa para ordenar em ordem decrescente 3 números inteiros em Linguagem C.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1, num2, num3;

    printf("Informe o 1º número:\n");
    scanf("%d", &num1);
    printf("Informe o 2º número:\n");
    scanf("%d", &num2);
    printf("Informe o 3º número:\n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 >num3 && num2 > num3) {
        printf("Logo a ordem decrescente dos valores serão: %d, %d, %d.\n", num1,num2,num3);
    } else if (num1 > num2 && num2 < num3 && num1 > num3) {
        printf("Logo a ordem decrescente dos valores serão: %d, %d, %d.\n", num1,num3,num2);
    } else if( num1 < num2 && num1 > num3 && num2 > num3) {
        printf("Logo a ordem decrescente dos valores serão: %d, %d, %d.\n", num2,num1,num3);
    } else if (num1 < num2 && num2 > num3 && num1 < num3){
        printf("Logo a ordem decrescente dos valores serão: %d, %d, %d.\n", num2,num3,num1);
    } else if (num3 > num2 && num2 > num1 && num3 > num1) {
        printf("Logo a ordem decrescente dos valores serão: %d, %d, %d.\n", num3,num2,num1);
    } else {
        printf("Logo a ordem decrescente dos valores serão: %d, %d, %d.\n", num3,num1,num2);
    }

    system("pause");

    return 0;
}