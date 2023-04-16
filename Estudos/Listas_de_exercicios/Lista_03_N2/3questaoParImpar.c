//Nome: Ives Gabriel Figueiredo Santos Pinto
//3 Questão do exercício de Vetores N2 da lista de Portugol.

                            //Há atualização - [IMCOMPLETO] - Há pontos incorretos. 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
system("cls");
    char retorno;
    int i, num[15], dadosPar[15], dadosImpar[15], dadosNulo[15];

    do
    {
        for (i=0; i<=15; i++)
        {
            printf("Informe o %dº número para ser verificado: ", i+1);
            scanf("%d", &num[i]);

            if(num[i] %2 ==0 && num[i] !=0)
            {
                scanf("%s", dadosPar[i]);  //Testar esse método.
            }else if(num[i] == 0)
            {
                dadosNulo[i] = num[i];
            }else
            {
                dadosImpar[i] = num[i];
            }
        }
        for(i=0; i<=15; i++)
        {
            printf("Números pares, %dª posição:\n%d\n",i+1, dadosPar[i]);
            printf("Números ímpares, %dª posição:\n%d\n", i+1, dadosImpar[i]);
            printf("Números nulos, %dª posição:\n%d\n",i+1 , dadosNulo[i]);
        }
    
        printf("Deseja realizar outra operação? [n - Não | s - Sim]\n");
        scanf(" %c", &retorno);
    }while(retorno != 'n' && retorno != 'N');
}