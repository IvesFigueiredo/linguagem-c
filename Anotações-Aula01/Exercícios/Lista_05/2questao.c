/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Lista 05, Questão 02 Programa que conte quantos dígitos do número possui.*/

#include <stdio.h>
#include <stdlib.h>

char r;

int verificacao(int n)
{
   static int cont = 0;
    if (n != 0)
    {
        if (cont != 0)
        {
            cont = 0;
        }
        verificacao(n / 10);
        cont++;
    }
    return cont ;
}

int main(void)
{
    system("cls");
    do {
        int num, i = 0;
        

        printf("Informe um número inteiro: ");
        scanf("%d", &num);

        i = verificacao(num);
        printf("O número %d, tem %d digitos.\n", num, i);

        printf("Deseja repetir a operação? [ s - Sim | n - Não ]\n");
        scanf(" %c", &r);
    } while (r != 'n' && r != 'N');
}