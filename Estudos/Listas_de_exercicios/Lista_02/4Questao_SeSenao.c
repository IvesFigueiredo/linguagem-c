// Programa para treinamento de condicionante, se os números são iguais, somarem entre si, senão multiplicar entre si.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, num3;

    printf("Informe o primeiro número:\n");
    scanf("%d", &num1);
    printf("Informe o segundo número:\n");
    scanf("%d", &num2);

    if (num1 == num2) {
        num3 = num1+num2;
        printf("Soma: %d\n", num3);
    } else {
        num3 = num1*num2;
        printf("Multiplicação: %d\n", num3);
    }
}