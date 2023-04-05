#include <stdio.h>
#include <stdlib.h>

int main(){

    #define texto "O amor eh a coisa mais bela que existe, ha tantas coisas que podemos ver, mas o amor faz com que essas coisas brilhem."
    char nome1[50] = "";
    char nome2[50] = "";

    printf("Informe o primeiro nome:\n");
    scanf("%s.", nome1);

    printf("Informe o segundo nome:\n");
    scanf("%s.", nome2);

    printf("\nEntao para o amor de %s e %s. Se tem uma mensagem.\n\n", nome1, nome2);
    printf("Mensagem: %s.", texto);

    system ("pause");
}