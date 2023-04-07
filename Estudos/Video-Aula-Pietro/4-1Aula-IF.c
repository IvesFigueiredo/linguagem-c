//Aprendizado em condicionantes na linguagem C (IF)

#include <stdio.h>
#include <stdlib.h>

int main() {

    float m;

    printf("Informe uma nota:\n");
    scanf("%f", &m);

    if(m >= 7.0) {
        printf("Aprovado(a)!\n");
    }

    system("pause");
}