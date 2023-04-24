/*Nome: Ives Gabriel Figueiredo Santos Pinto

Assunto: Um programa que indique a quantidade mínima de células num valor inserido. Cédulas de 1, 5, 10, 50 e 100 reais.
*/
#include <stdio.h>
#include <stdlib.h>

char retorno;
int valor, resto1=0, resto5=0, resto10=0, resto50=0, resto100=0, cedula1=0, cedula5=0, cedula10=0, cedula50=0, cedula100=0;

void inserirDados() {
    printf("\t\tATM FSP_Money - Bem vindo!\n\n");
    printf("Informe o valor que deseja retirar: ");
    scanf("%d", &valor);
}

void calculoCedula(){

        cedula100 = valor/100;
        resto100 = valor%100;

        cedula50 = resto100/50;
        resto50 = resto100%50;
    
        cedula10 = resto50/10;
        resto10 = resto50%10;
          
        cedula5 = resto10/5;
        resto5 = resto10%5;
        
        cedula1 = resto5/1;

}


void mostragem(){
    printf("\nPara o valor de %d reais, temos:\n\n", valor);
    printf("%d cédulas de 100 reais.\n", cedula100);
    printf("%d cédulas de 50 reais.\n", cedula50);
    printf("%d cédulas de 10 reais.\n", cedula10);
    printf("%d cédulas de 5 reais.\n", cedula5);
    printf("%d cédulas de 1 real.\n", cedula1);
}

int main(void) {
system("cls");

do
{
system("cls");
inserirDados();
calculoCedula();
mostragem();

    printf("\nDeseja realizar outro saque? [ s - Sim | n - Não ]");
    scanf(" %c", &retorno);
}while(retorno != 'n' && retorno != 'N');

}