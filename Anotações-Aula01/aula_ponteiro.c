
#include <stdio.h>

int x = 10;
int *ponteiro; //Aqui está criando um ponteiro com (*) 
ponteiro = &x; // apontando para endereço de memoria de x ("&" faz com que acesse o endereço, senão dirige a apenas o valor = 10)

int main(void) {
    
    printf("Valorde x: %d\n", x);       // 10
    printf("Endereço de x: %p\n", &x);  // utilizando o (&)endereço de x na memoria %p(hexadecimal)
    printf("Valor de ponteiro: %p\n", ponteiro); // endereço de x na memoria
    printf("Valor apontado por ponteiro: %d\n", *ponteiro); // 10

    *ponteiro =20; // --> Atribuindo o valor para o endereço de memora apontado.

    printf("Valor de x: %d\n", x);      // 20
    printf("Valor apontado por ponteiro: %d\n", *ponteiro); // 20
}