        //Programa para calcular o IMC de homens e de mulheres em linguagem C
    
#include <stdio.h>
#include <stdlib.h>

int  main() {

    float alt, peso, imc;

system("cls");

    printf("\t\tAnálise da condição de Peso - IMC.\n\nInforme o seu peso em kilogramas [ Kg ]: ");
    scanf("%f", &peso);
    printf("Informe a sua altura em metros [ m ]: ");
    scanf("%f", &alt);

    imc = peso/(alt*2);
    printf("O valor do seu IMC é, %.2f.\n", imc);

    if( imc < 18.5) {
        printf("\nAtenção! Você está abaixo do peso ideal, segundo a OMS\n");
    } else if( imc >= 18.5 && imc <= 25) {
        printf("Parabéns! Você está no peso ideal, segundo a OMS.\n");
    } else if( imc > 25 && imc < 30) {
        printf("\nVocê está acima do peso ideal, segundo OMS.\n");
    } else if (imc > 30) {
        printf("Atenção! Você está obeso, segundo OMS.\n");
    } else {
        printf("Alguma informação foi inserida incorretamente.\n");
    }

    system("pause");
     
    return 0;
}