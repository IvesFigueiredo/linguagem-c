        //Implementação da Lógica booleana na Linguagem C.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

        bool verif;
        int num1, num2, num3;
        char retorno;

    do{

system("cls");
        printf("Informe o primeiro numero:\n");
        scanf("%d", &num1);

        printf("Informe o segundo numero:\n");
        scanf("%d", &num2);

        printf("Informe o terceiro numero:\n");
        scanf("%d", &num3);

        verif = num1+num2 < num3;

        printf("Verificador: %d.\n", verif);

        if(verif == 1) {
            printf("A soma dos dois primeiros numeros eh menor que o terceiro numero informado.\n");
        } else {
            printf("A soma dos dois primeiros numeros eh maior que o terceiro numero informado.\n");
        }

        printf("Deseja realizar outra operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    }while (retorno != 'n' && retorno != 'N');

}