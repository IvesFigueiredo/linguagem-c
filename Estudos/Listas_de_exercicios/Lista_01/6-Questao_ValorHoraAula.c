        //Programa para calcular Hora-Aula de um professor, a depender do nível.

#include <stdio.h>
#include <stdlib.h>


int main() {

    float salario;
    int hora, nivel;

    printf("Olá professor, para calcular o valor que deverá receber, informe os seguintes parametros.\n");
    printf("Qual eh o seu nivel profissional? [1, 2 ou 3]\n");
    scanf("%d", &nivel);

    switch(nivel) {

        case 1 :
            printf("Para Professor nivel 01 o valor eh R$ 12,00 hora/aula.\nQuantas horas atuou?\n");
            scanf("%d", &hora);

            salario = 12*hora;
            printf("O valor a receber eh de %.2f reais.", salario);
            break;

        case 2 :
            printf("Para Professor nivel 02 o valor eh R$ 17,00 hora/aula.\nQuantas horas atuou?\n");
            scanf("%d", &hora);

            salario = 17*hora;
            printf("O valor a receber eh de %.2f reais.\n", salario);
            break;

        case 3: 
            printf("Para o professor nivel 03 o valor eh R$ 25,00 hora/aula.\nQuantas horas atuou?\n");
            scanf("%d", &hora);

            salario = 25*hora;
            printf("O valor a receber eh de %.2f reais.\n", salario);
            break;
        
        default :
            printf("Informe o nivel correto. Por favor repetir o processo.\n");
    }

    system("pause");

}