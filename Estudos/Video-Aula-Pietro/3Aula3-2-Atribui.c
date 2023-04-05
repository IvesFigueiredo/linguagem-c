        //Programa com ênfase no conhecimento em operadores de atribuição aritmétricas.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int dado;

    printf("Informe um numero para aplicacao de atribuicoes:\n");
    scanf("%d", &dado);

    printf("O valor antes do incremento: %d.\n", dado);

    dado++;
    printf("O valor depois do incremento: %d.\n", dado);

    dado+=3;
    printf("O valor depois do incremento em 3 unidades: %d.\n", dado);

    dado--;
    printf("O valor depois do decremento: %d.\n", dado);

    dado -=5;
    printf("O valor depois do decremento de 5 unidades: %d.\n", dado);

    dado *= 10;
    printf("O valor depois de multiplicar por 10: %d.\n", dado);

    dado /= 2;
    printf("O valor depois de dividir por 2: %d.\n", dado);

    system("pause");
}