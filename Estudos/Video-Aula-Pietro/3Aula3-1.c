#include <stdio.h>
#include <stdlib.h>

//Utilização do #define texto "Entrada e saída de dados."

#define texto "Entrada e saida de dados."

int main(){
    printf("\t%s\n\n", texto);

    int idade = 0;
    float altura = 0;
    char nome[50] = "";

    printf("Informe a idade:\t");
    scanf("%d", &idade);

    printf("Informe a altura:\t");
    scanf("%f", &altura);

    printf("Informe o nome:\t");
    scanf("%s", nome);

    printf("\nDados informados:\n");
    printf("Idade informada: %d anos.\n", idade);
    printf("Altura informada: %.2f metros\n", altura);
    printf("Nome informado: %s\n", nome);

    system("pause");
}