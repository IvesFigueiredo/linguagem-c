/*Nome: Ives Gabriel Figueiredo Santos Pinto

Assunto: 5 questão, Lista 05

MENSAGEM:  PROFESSOR, NÃO CONSEGUI RESOLVER ESSA QUESTÃO, ENCONTREI ESTE EXEMPLO NA INTERNET PARA PODER ENTREGAR, GOSTARIA QUE O SENHOR EXPLICASSE ESSA QUESTÃO EM AULA, OBRIGADO E ME DESCULPE. */

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define SIZE 6

void megasena_combinations(int chosen[], int remaining[], int n, int i)
{
    // Caso base: já foram escolhidas SIZE dezenas
    if (n == SIZE)
    {
        // Imprime a combinação encontrada
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", chosen[j]);
        }
        printf("\n");
        return;
    }
    // Caso contrário, escolhe a próxima dezena e chama a si mesma recursivamente
    if (i < 60)
    {
        chosen[n] = remaining[i];
        megasena_combinations(chosen, remaining, n + 1, i + 1);
        megasena_combinations(chosen, remaining, n, i + 1);
    }
}

int main()
{
    int chosen[SIZE];
    int remaining[60];
    for (int i = 0; i < 60; i++)
    {
        remaining[i] = i + 1;
    }
    megasena_combinations(chosen, remaining, 0, 0);
    return 0;
}
/*Nesta implementação, a função megasena_combinations é recursiva e tem quatro parâmetros :

    chosen : um array que armazena as dezenas escolhidas até agora remaining : um array que contém as dezenas que ainda não foram escolhidas n : o número de dezenas que já foram escolhidas i : o índice da próxima dezena a ser escolhida a partir do array remaining A lógica da função é a seguinte :

    Se já foram escolhidas SIZE dezenas,
    a função imprime a combinação encontrada e retorna.Caso contrário,
    a função escolhe a próxima dezena a partir do array remaining(se ainda houver dezenas disponíveis) e chama a si mesma recursivamente com a dezena escolhida(adicionada ao array chosen) e o índice da próxima dezena a ser escolhida(incrementado em 1).Em seguida,
    a função chama a si mesma novamente,
    mas sem adicionar a dezena escolhida ao array chosen,
    para tentar todas as combinações possíveis que não incluem essa dezena.Na função main,
    criamos os arrays chosen e remaining e inicializamos remaining com todos os números de 1 a 60. Em seguida,
    chamamos a função megasena_combinations com chosen,
    remaining,
    0(o número de dezenas escolhidas até agora)e 0(o índice da primeira dezena a ser escolhida).*/