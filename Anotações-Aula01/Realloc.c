#include <stdio.h>
#include <stdlib.h>

int main(void) {
system("cls");
    int *vetor, p;
    int tamanho = 5, t;
    
    vetor = malloc(tamanho*sizeof(int));// Alocação dinâmica na variável vetor com o tamanho da variável "tamanho" do tipo inteiro. No caso é 5.
    p = (tamanho*sizeof(int)); //p recebe o tamanho da do tipo inteiro. Que no caso é 5.

    vetor[0] = 1;
    vetor[1] = 23;
    vetor[2] = 30;
    vetor[3] = 90;
    vetor[4] = 49;

    printf("%d, %d, %d, %d, %d\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

    vetor = realloc(vetor, 7*sizeof(int));// Uma realocação de quando houve a ocupação dos 5 espaços, abrir mais 2 espaços, totalizando 7 espaços a ser usado.

    vetor[5] = 87;
    vetor[6] = 19;

    printf("Valores com o realloc em ação:\n %d, %d, %d, %d, %d, %d, %d\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4], vetor[5], vetor[6]);

    tamanho = sizeof(vetor)/sizeof(vetor[0]);// Procurar entender(????????)
    t = p / sizeof(vetor[0]); //No caso t = 5 /1.

    printf("Quantidade de posições do array: %d\n", t);

}