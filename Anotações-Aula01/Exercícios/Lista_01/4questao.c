// 4° Questão da 1° Lista.

#include <stdio.h>
#include <stdlib.h>

int main () {

    float sal, novoSal, difSal;
    int  codigo;
    char retorno;
    
    do {
system("cls");
        printf("\t\tSistema para reajuste de salário.\n\nInforme o seu salário atual: ");
        scanf("%f", &sal);
        printf("Informe o código da função que você exerce: ");
        scanf("%d", &codigo);

        switch(codigo) {

            case 310 :

                novoSal = sal*1.05;
                difSal = novoSal - sal;
                printf("O seu novo salário é R$ %.2f\nA diferença do salário antigo com o novo é de R$ %.2f\n", novoSal, difSal);

            break;

            case 456 :

                novoSal = sal*1.075;
                difSal = novoSal-sal;
                printf("O seu novo salário é R$ %.2f\nA diferença do salário antigo com o novo é de R$ %.2f\n", novoSal, difSal);
        
            break;

            case 885 :

                novoSal = sal*1.1;
                difSal = novoSal-sal;
                printf("O seu novo salário é R$ %.2f\nA diferença do salário antigo com o novo é de R$ %.2f\n", novoSal, difSal);

            break;

            default :

                novoSal = sal*1.15;
                difSal = novoSal-sal;
                printf("O seu novo salário é R$ %.2f\nA diferença do salário antigo com o novo é de R$ %.2f\n", novoSal, difSal);
            break;
        }
        printf("\nDeseja preencher novamente? [s - sim | n - não]\n");
        scanf(" %c", &retorno);
    } while (retorno != 'n' && retorno != 'N');


return 0;
}