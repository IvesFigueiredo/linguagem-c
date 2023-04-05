        //Programa para converter Farenheit para Celcius

#include <stdio.h>
#include <stdlib.h>

int main() {

    float cels, fahr;

    printf("\t\tConversor de temperatura de Farenheit para Celcius\n\n");
    printf("Informe a temperatura em Farenheit para converter para Celcius:\n");
    scanf("%f", &fahr);

    cels = (5*fahr - 160)/9;

    printf("Celsius = %.2foC\n", cels);

    system("pause");

}