//  Lista 01 - Questão 05.
//  Nome: Ives Gabriel Figueiredo Santos Pinto.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main () {

    int  time1, time2;
    char  nomTim1[50], nomTim2[50];
    char retorno;
    bool verif;

    do {
system("cls");

        printf("Informe o nome do 1º time: ");
        scanf("%s", nomTim1);
        printf("Informe o nome do 2º time: ");
        scanf("%s", nomTim2);

        do {
            printf("Quantos gols o %s realizou no jogo?\n", nomTim1);
            scanf("%d", &time1);
        }while(time1 < 0); 
        do {
            printf("Quantos gols o %s realizou no jogo?\n", nomTim2);
            scanf("%d", &time2);
        } while (time2 < 0);
        if (time1 > time2) {
            printf("O %s venceu!\n", nomTim1);
            printf("Placar: %s - %d x %d - %s.\n", nomTim1, time1, time2, nomTim2);
        }else if ( time1 < time2) {
            printf("O %s venceu!\n", nomTim2);
            printf("Placar: %s - %d x %d - %s.\n", nomTim1, time1, time2, nomTim2);
        }else {
            printf("Houve empate!\nPlacar: %s - %d x %d - %s.\n", nomTim1, time1, time2, nomTim2);
        }

        printf("Deseja realizar outra operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);

        verif = (retorno != 'n' && retorno != 'N');
        printf("Verificação: %d.\n", verif);
        system("pause");
    } while ( verif == 1);

return 0;
}