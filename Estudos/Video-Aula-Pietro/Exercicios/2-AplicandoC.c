#include <stdio.h>
#include <stdlib.h>

#define texto "Bahia eh o mundo!"

char nome1[50] = "", time[50] ="";
int idade = 0;

int main(){

    printf("\t\t%s.\n", texto);

    printf("Como se chama pequeno gafanhoto?\n");
    scanf("%s", nome1);

    printf("Qual eh a sua idade?\n");
    scanf("%d", &idade);

    printf("Qual eh o seu time favorito?\n");
    scanf("%s", time);

    printf("Os dados informados foram:\n\n");
    printf("Nome: %s.\nIdade: %d.\nTime: %s.\n", nome1, idade, time);

    system("pause");
}
