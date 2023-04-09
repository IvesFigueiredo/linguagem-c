        //Programa para verificar 02 números inteiros e identificar o maior.
    
#include <stdio.h>
#include <stdlib.h>

int main () {

int num1, num2;

    printf("Informe o primeiro numero:\n");
    scanf("%d", &num1);

    printf("Informe o segundo numero:\n");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("O primeiro numero inserido [%d] eh maior do que o segundo numero inserido [%d].\n", num1, num2);
    } else if (num2 > num1) {
        printf("O segundo numero inserido [%d] eh maior do que o primeiro numero inserido [%d].\n", num2, num1);
    } else {
        printf("Ambos os numeros sao iguais, [%d] e [%d].\n", num1, num2);
    }

    system("pause");
}