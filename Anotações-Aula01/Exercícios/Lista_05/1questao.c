/*Nome: Ives GAbriel Figueiredo Santos Pinto
Assunto: Lista 05 Questão 01 
*/

#include <stdio.h>
#include <stdlib.h>
int num;

int somatorio (int n)
{

    if (n == 1)
    {
        return 1;
    }else
    {
        return n+somatorio(n-1);
    }
}

int main(void)
{    
    system("cls");
    printf("Digite um número que será calculado: ");
    scanf("%d", &num);
    printf("%d",somatorio(num));
}