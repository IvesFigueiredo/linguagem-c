//Nome: Ives Gabriel Figueiredo Santos Pinto
//Questão 01 Lista 02

#include <stdio.h>
#include <stdlib.h>

float multiplica (float num1, int multiplicador){
   float resultado = num1*multiplicador;
    return resultado;
}

int main(void) {

    int i;
    float n1;
    char retorno;

    do{
system("cls");

        printf("\t\t\tPrograma para calcular a tabuada.\n\nInforme um número: ");
        scanf("%f", &n1);

        for(i=1; i<=10; i++){
            printf("%.1f x %d = %.1f\n", n1, i, multiplica(n1, i));
        }

        printf("Deseja realizar outra operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');
}
