        //Programa de conhecimento dos operadores, +,-,*,/ - Informar 02 n°'s para realizar essas operações.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, soma, subtr, mult, divis;
    char nome[50];

    printf("Informe o seu nome:\n");
    scanf("%s", nome);

    printf("Olah, %s, informe o primeiro numero:\n", nome);
    scanf("%d", &num1);

    printf("Por favor, %s, informe o segundo numero:\n", nome);
    scanf("%d", &num2);

    soma = num1 + num2;
    subtr = num1 - num2;
    mult = num1 * num2;
    divis = num1 / num2;

    printf("Esses sao os resultados, %s:\n", nome);

    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", subtr);
    printf("Multipicacao = %d\n", mult);
    printf("Divisao = %d\n", divis);

    printf("Muito obrigado, %s, ateh logo.\n", nome);

    system("pause");
}