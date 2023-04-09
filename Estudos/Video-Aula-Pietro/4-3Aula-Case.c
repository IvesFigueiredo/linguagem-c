        //      Implementação da condicionante SWITCH - CASE (Escolha - Caso), na linguagem C

#include <stdio.h>
#include <stdlib.h>

int main() {

    int d;
    
    printf("Digite um numero entre 1 e 7:\n");
    scanf("%d", &d);

    switch(d){
        case 1 :
            printf("Domingo.\n");
            break;

        case 2 :
            printf("Segunda-Feira.\n");
            break;
        
        case 3 :
            printf("Terca-Feira.\n");
            break;

        case 4 :
            printf("Quarta-Feira.\n");
            break;
        
        case 5 :
            printf("Quinta-Feira.\n");
            break;

        case 6 :
            printf("Sexta-Feira.\n");
            break;

        case 7 :
            printf("Sabado.\n");
            break;

        default :
            printf("Opcao Invalida.\n");
    }

    system("pause");
}