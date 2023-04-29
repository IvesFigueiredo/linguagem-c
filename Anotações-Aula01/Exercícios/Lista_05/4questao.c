/*Nome> Ives Gabriel Figueiredo Santos Pinto
Assunto Lista05, Questão 04*/

#include <stdio.h>
#include <stdlib.h>

int elevado (int a ,int b)
{

    if (b > 0)
    {  
        return a*elevado(a, b-1);
    }else
    {
        return 1;
    }   
}

int main (void)
{
    system ("cls");

    int num1, elev, resul;

    printf("Informe o número a ser calculado: ");
    scanf("%d", &num1);
    printf("Informe a exponencial que deverá calcular o número anterior: ");
    scanf("%d", &elev);
    
    resul = elevado(num1, elev);
    printf("O valor número é, %d.\n\n", resul);
}