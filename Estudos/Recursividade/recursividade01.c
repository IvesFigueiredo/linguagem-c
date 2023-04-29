/*  Estudo referente recursividade PARTE 01
    Assunto FATORIAL como exemplo, o que é fatorial?
    5! = 5 * 4 * 3 * 2 * 1 --> 5! = 120
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("cls");
    int num, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    resultado = fatorial(num);

    printf("\nO fatorial é %d\n", resultado);
}

int fatorial(int x)
{

    int resultado;

    if (x == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = x * fatorial(x - 1);
                /*  3 *                     
                    2 *
                    1 *

                    Quando o x for 1, irá subtrair novamente por -1 na função fatorial, com isso, o x = 0, entra na condicionante "if == 0" e retornará 1, este retorno = 1, é o resultado (variável) da função, logo, preencherá novamente de baixo para cima: 1 * 1 = 1 logo;
                    3 * 
                    2 * 
                    1 * 1
                    Com essa multiplicação de 1 * 1 o resultado (variável) será 1, no próximo preechimento a função retorna 1 novamente, logo;
                    3 * 
                    2 * 1
                    1 * 1
                    Partindo do mesmo principio a próxima etapa é obter o resultado da função seguinte, sendo, 2 * 1 = 2, então o resultado (variável) da função é igual a 2, logo será;
                    3 * 2
                    2 * 1
                    1 * 1
                    Conclusão com essas etapas o resultado de retorno é 6, logo o fatorial de 3 é 6.
                */
    }
    return resultado;
}