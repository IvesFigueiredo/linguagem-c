// Implementação de função local em C

#include <stdio.h>
#include <stdlib.h>


float calcularMedia(float num1, float num2) {

    float media = (num1 + num2)/2;
    return media;
}

int main (void){ 

    system("cls");
    float n1, n2, resultado;

    printf("Informe dois valores para a média: ");
    scanf("%f %f", &n1, &n2);

    resultado = calcularMedia(n1, n2);

    printf("Média: %.2f", resultado);
}