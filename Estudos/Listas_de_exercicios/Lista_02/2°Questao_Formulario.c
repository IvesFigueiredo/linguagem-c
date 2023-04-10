        //Programa simulando um formulario para mulheres, utilizando comparação de char em cadeia em Linguagem C.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[50], civil[50]; //texto
    int tempo;
    char sexo; // 01 caracter

    printf("Informe o seu nome:\n");
    scanf("%s", nome);
    printf("Qual o seu genero? [H - Homem, M - Mulher]\n");
    scanf("%c", &sexo);
    printf("Informe o estado civil?\n");
    scanf("%s", civil);

    if(sexo == 'M' && (strcmp(civil, "casada") == 0 || strcmp(civil, "Casada") ==0 )){
        printf("Quantos anos de casada?\n");
        scanf("%d", &tempo);
    } else {
        printf("Obrigado, até logo.\n");
    }
system("pause");

}