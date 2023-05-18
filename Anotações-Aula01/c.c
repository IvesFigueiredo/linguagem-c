#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct forca
{
    char nome1[100], nome2[100];
    int escolher;
} forca;

forca f;

int escolha(void)
{
    int quantidade;

    printf("Escolha qual é a palavra a ser jogada: \nAperte [1] para a 1° palavra que foi escrita: \nAperte [2] para a 2° palavra que foi escrita: \n");
    scanf("%d", &f.escolher);

    while (f.escolher != 2 && f.escolher != 1)
    {
        system("cls");
        printf("Você selecionou uma opção inválida! \nEscolha qual é a palavra a ser jogada: \nAperte [1] para a 1° palavra que foi escrita: \nAperte [2] para a 2° palavra que foi escrita: \n");
        scanf("%d", &f.escolher);
    }

    switch (f.escolher)
    {
    case 1:
        quantidade = strlen(f.nome1);
        printf("A palavra selecionada tem: [%d] letras", quantidade);
        break;

    case 2:
        quantidade = strlen(f.nome2);
        printf("A palavra selecionada tem: [%d] letras", quantidade);
        break;
    }
}

int main(void)
{
    system("cls");

    printf("Vamos selecionar dois possíveis nomes para o jogo da forca; \nLembrando que a palavra não pode ter caracteres especias ou por ex:(á,à,ã,â,ç) : \nDigite o 1° possível nome: \n");
    scanf("%s", f.nome1);
    system("cls");
    printf("Digite o 2° possível nome: \n");
    scanf("%s", f.nome2);
    system("cls");

    escolha();
}