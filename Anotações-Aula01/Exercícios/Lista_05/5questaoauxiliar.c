/*Questão MEGA-SENA
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeros[6], i, j, numeroDigitado, numeroRepetido, verificador;
int numerosSorteados[6], numeroSorteado, numeroJaSorteado, acertos = 0;

void leitura() {
        while (i < 6)
    {
        printf("Digite um número entre 1 - 60: ");
        scanf("%d", &numeroDigitado);

        if (numeroDigitado <= 0 || numeroDigitado > 60)
        {
            printf("Digite o número entre 1 - 60.\n");
        }
        else
        {
            numeroRepetido = 0; // Flag controlar se encontramos o número.
            verificador = 0;    // Irá navegar dentro do vetor para checar se há número repetido.

            for (verificador = 0; verificador < i; verificador++)
            {
                if (numeros[verificador] == numeroDigitado)
                {
                    numeroRepetido = 1;
                    printf("Este número já foi digitado, informe um outro número.\n");
                    break;
                }
            }

            if(numeroRepetido == 0)
            {
                numeros[i] = numeroDigitado; //Insere o número 
                i++; // Incrementa o total de numeros digitados
            }
        }
    }
}

void sorteio() {

    srand(time(NULL));
    printf("NUMEROS SORTEADOS:\n");
    i=0;
    while (i < 6)
    {
        numeroSorteado = rand() % 60;
        numeroJaSorteado = 0;

        for (verificador = 0; verificador < i; verificador++)
        {
            if (numerosSorteados[verificador] == numeroSorteado)
            {
                numeroJaSorteado = 1;
            }
        }

        if (numeroJaSorteado == 0)
        {
            numerosSorteados[i] = numeroSorteado;
            i++;
            printf("%d ", numeroSorteado);
        }
    }
}

void verificaAcertos() {

    for(i =0; i < 6; i++)
    {
        for(j=0; j<6; j++)
        {
            if(numerosSorteados[i] == numeros[j])
            {
                acertos++;
            }
        }
    }

    printf("\nTotal de acertos: %d \n ", acertos);
}

int main(void)
{
    char r;
    do
    {

    system("cls");
    
    leitura();
    sorteio();
    verificaAcertos();

        printf("\nDeseja realizar outro sorteio? [ s - Sim | n - Não ]\n");
        scanf(" %c", &r);
    }while ( r != 'n' && r != 'N');
}