// Entrada e Saída de dados


#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Oi, tenho 28 anos e estou aprendendo a programar.\n");

    printf("Valor inteiro: %d.\n", 10); // %d para valor inteiro
    printf("Valor real: %f.\n", 3.14159265); // %f para valor decimal
    printf("Valor real com apenas 02 casas decimais: %.2f.\n", 3.14159265); //%.2f - .2 limitando a ter apenas 02 casas decimais, e f por ser um valor decimal
    printf("Dado de texto: %c.\n", 'a'); //valor em caractere - apenas 01 caracter, letra, simbolos e também número em formato de texto
    printf("Dado de texto: %s.\n", "Ives Gabriel"); //valor em cadeia - texto

    system("pause");
}