// Programa para somar 05 ou 08 a depender se o número informado é par ou impar.

#include <stdio.h>
#include <stdlib.h>

int main (){

    int num1, resul;

    printf("Informe um numero:\n");
    scanf("%d", &num1);

    if(num1%2==0){
        resul = num1+5;
        printf("A variavel eh par, logo o resultado eh: %d\n", resul);
    } else {
        resul = num1+8;
        printf("A variavel eh impar, logo o resultado eh: %d\n", resul);
    }

    system("pause");
}