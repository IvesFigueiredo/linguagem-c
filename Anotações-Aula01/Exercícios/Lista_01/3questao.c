//Nome: Ives Gabriel Figueiredo Santos Pinto
//Questão 03 - Lista 01

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num1, num2, num3;
    char retorno;

    do {
system("cls");

        printf("Informe o primeiro número:\n");
        scanf("%d", &num1);
        printf("Informe o segundo número:\n");
        scanf("%d", &num2);

        if (num1 == num2) {
            num3 = num1+num2;
            printf("Soma: %d\n", num3);
        }else {
            num3 = num1*num2;
            printf("Multiplicação: %d\n", num3);
        }

        printf("Deseja realizar outra operção? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
}