/*A função da alocação de memória CALLOC é semelhante ao MALLOC, porém com a diferença em atribuir o valor 0 apartir do momento que é declarada no programa.*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
system("cls");

int *i;

i= calloc(3, sizeof(int)); //sintáxe para alocação dinâmica, onde aloca 3 espaços na memória e atribuindo o valor 0, antes de ser atribuido por um outro valor.

printf("Os valores presentes no ponteiro, após a alocação, são %d, %d, %d\n", i[0], i[1], i[2]);

i[0] = 10;
i[1] = 100;
i[2] = 950;

printf("Os valores armazenados no ponteiro, após a atribuição, são: %d, %d, %d\n", i[0], i[1], i[2]);

free(i); //Liberação dos espaços utilizados da memória

printf("Os valores armazenados no ponteiro, após a liberação da memória, são: %d, %d, %d\n", i[0], i[1], i[2]); // Irá aparecer o lixo (valores aleatórios pois com a liberação de memória os valores atribuidos foram dispersados.)
}