#include <stdio.h>
#include <stdlib.h>

int main(void) {
system("cls");
  int num1, num2, soma;

    printf("Informe dois números para realizar a soma: \n");
    scanf("%d%d", &num1, &num2);
    soma = num1+num2;

    printf("Resultado: %d\n", soma);

}