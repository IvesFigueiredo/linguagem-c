        //Programa para informa a partir do nome dos estados sulistas o adjetivo pátrio.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    char estado[50];

    printf("Informe o nome ou abreviacao do estado da regiao sul:\n");
    scanf("%s", estado);

    if (strcmp(estado, "Parana") == 0 || strcmp(estado, "parana") == 0 || strcmp(estado, "PR") == 0) {
        printf("O adjetivo patrio do estado Parana eh \"Paranaense\".\n");
    } else if (strcmp(estado, "Santa Catarina") == 0 || strcmp(estado, "santa catarina") == 0 || strcmp(estado, "SC") == 0) {
        printf("O adjetivo patrio do estado de Santa Catarina eh \"Catarinense\".\n");
    } else if (strcmp(estado, "Rio Grande do Sul") == 0 || strcmp(estado, "rio grande do sul") == 0 || strcmp(estado, "Rio Grande Do Sul") == 0 || strcmp(estado, "RS") ==0 ) {
        printf("O adjetivo patrio do estado de Rio Grande do Sul eh \"Gaucho\".\n");
    } else {
        printf("Informacao invalida.\n");
    }

    system("pause");
}