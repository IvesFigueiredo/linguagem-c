        //Programa para calcular o peso ideal de homens e de mulheres em linguagem C

#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, alt;
    char sexo;

    printf("Vamos calcular o seu peso ideal.\n\nInforme a sua altura em metros[m]: ");
    scanf("%f", &alt);

    printf("Informe o seu gênero [ H - Homem | M - Mulher ]: ");
    scanf(" %c", &sexo);

    switch(sexo) {

        case 'H' :

            peso = (72.7*alt)-58;
            break;
        
        case 'M' :

            peso = (62.1*alt)-44.7;
            break;

        default :
            printf("Opção inserida inválida! Por favor repita o processo nas condições corretas.\n");
            break; 
    }

    printf("O seu peso ideal é, %.2f kg.\n", peso);

    system("pause");

    return 0;
}