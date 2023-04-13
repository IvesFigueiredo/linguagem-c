//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

        bool verif;
        int num1, num2, num3;
        char retorno;

    do{

system("cls");
        printf("Informe o 1º número: ");
        scanf("%d", &num1);

        printf("Informe o 2º número: ");
        scanf("%d", &num2);

        printf("Informe o 3º número: ");
        scanf("%d", &num3);

        verif = num1+num2 < num3;

//        printf("Verificador: %d.\n", verif);

        if(verif == 1) {
            printf("\nA soma dos dois primeiros números é menor que o terceiro número informado.\n\n");
        } else {
            printf("\nA soma dos dois primeiros números é maior que o terceiro número informado.\n\n");
        }

        printf("Deseja realizar outra operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    }while (retorno != 'n' && retorno != 'N');

}