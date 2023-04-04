//Sobre scanf() --> leia() | Salvo em memoria 

#include <stdio.h>
#include <stdlib.h>

int main() {

    int idade = 0;
    int ano = 1950;
    float peso = 0;
    

    printf("Informe a idade e o ano que desejar:\n");
    scanf("%d %d", &idade, &ano);

    printf("Informe o peso:\n");
    scanf("%f", &peso);

    printf("A idade digita eh, %d.\n", idade);
    printf("O ano informado eh, %d.\n", ano);
    printf("Peso informado: %.2f kg.", peso);

    system("pause");
}