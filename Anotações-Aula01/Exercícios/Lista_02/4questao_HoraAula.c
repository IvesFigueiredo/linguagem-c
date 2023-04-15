// Nome: Ives Gabriel Figueiredo Santos Pinto
// Questão 04 Lista 02

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int hora, nivel;
    float salario;
    char retorno;
    do
    {
        system("cls");
        printf("Olá professor, informe o seu nível: [ 1 a 3 ] ");
        scanf("%d", &nivel);

        switch (nivel)
        {

        case 1:
            printf("\nInforme as horas completas trabalhadas: ");
            scanf("%d", &hora);
            salario = hora * 12;
            printf("R$ %.2f", salario);
            break;

        case 2:
            printf("\nInforme as horas completas trabalhadas: ");
            scanf("%d", &hora);
            salario = hora * 17;
            printf("R$ %.2f", salario);
            break;

        case 3:
            printf("\nInforme as horas completas trabalhadas: ");
            scanf("%d", &hora);
            salario = hora * 25;
            printf("R$ %.2f", salario);
            break;

        default:
            printf("\nOperação inválida.\n");
            break;
        }
        printf("\n\nDeseja repetir a operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &retorno);

    } while (retorno != 'n' && retorno != 'N');
    fimPrograma();
}

void fimPrograma()
{
    printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n");
}