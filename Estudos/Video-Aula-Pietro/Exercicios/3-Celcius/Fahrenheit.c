        // Programa para transformar temperatura em Celsius para Fahrenheit.

#include <stdio.h>
#include <stdlib.h>

int main() {

    float cels, fahre;

    printf("\t\tConversor de temperatura Celcius para Fahrenheit\n\n");
    printf("Informe a temperatura em Celcius que deseja converter para Fahrenheit:\n");
    scanf("%f", &cels);

    fahre = (9*cels + 160)/5;

    printf("Fahrenheit = %.2fF\n", fahre);

    system("pause");
}