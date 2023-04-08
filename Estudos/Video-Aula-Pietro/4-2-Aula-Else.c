        //Implementação do ELSE em Linguagem C

#include <stdio.h>
#include <stdlib.h>

int main() {

    float m;

    printf("Informe a media do aluno:\n");
    scanf("%f", &m);

    if(m >= 7.0) {
        printf("Esta aprovado, com a media %.2f.\n", m);
    } else if (m >= 4 && m < 7 ) {
        printf("Esta em recuperacao, com a media %.2f.\n", m);
    } else {
        printf("Esta reprovado, com a media %.2f.\n", m);
    }

    system("pause");
}