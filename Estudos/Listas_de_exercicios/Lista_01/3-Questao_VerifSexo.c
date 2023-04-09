        //Programa para verificar o gênero.

#include <stdio.h>
#include <stdlib.h>

int main() {

    char sexo;

    printf("Informe o seu sexo [M - Mulher e H - Homem]:\n");
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        printf("Genero valido. Mulher.\n");
    } else if (sexo == 'H' || sexo == 'h') {
        printf("Genero valido. Homem.\n");
    } else {
        printf("Informacao invalida.\n");
    }

    system("pause");
}