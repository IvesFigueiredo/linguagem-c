#include <stdio.h>
#include <stdlib.h>

int main(void) {
system("cls");

int *i;

i = malloc (sizeof(int));

printf("Os valores presentes no ponteiro, após a alocação, são: %d, %d, %d, %d\n", i[0], i[1], i[2], i[3]);
i[0]=10;
i[1] = 100;
i[2] = 950;
i[3] = 900;

printf ("Os valores presentes no ponteiro, após a atribuição, são: %d, %d, %d, %d\n", i[0], i[1], i[2], i[3]);

free(i);

printf ("Os valores presentes no ponteiro, após a liberação, são: %d, %d, %d, %d\n", i[0], i[1], i[2], i[3]);

}