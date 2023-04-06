        //Pragrama para calcular o Delta da função do 2° Grau

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b, c, delta;

    printf("\t\tPrograma para realizar o calculo do delta da Funcao do Segundo Grau\n\n");
    printf("Informe o valor de \"a\":\t");
    scanf("%d", &a);

    printf("Informe o valor de \"b\":\t");
    scanf("%d", &b);

    printf("Informe o valor de \"c\":\t");
    scanf("%d", &c);

    printf("Equacao: %dx^2 + %dx + %d = 0\n", a, b, c);

    delta = b*b-4*a*c;

    printf("Logo, delta = %d.\n", delta);

    system("pause");

}

