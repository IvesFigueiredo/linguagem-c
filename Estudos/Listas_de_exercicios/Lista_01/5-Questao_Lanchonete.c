        //Programa ilustrativo de um sistema de lanchonete.
#include <stdio.h>
#include <stdlib.h>

int main () {

    int codigo, quant;
    float preco;

    printf("Ola, seja bem-vindo a lanchonete do Ivelao!\n\nQual pedido deseja realizar? Segue o cardapio, por favor insira apenas o codigo referente ao pedido desejado.\n");
    printf("___________________________________________________________________________________________________");
    printf("\n|100 - Cachorro Quente - R$ 1,10/und.\t\t\t\t\t\t\t\t  |\n|101 - Baurives Simples (Queijo e Tomate) - R$ 1,30/und.\t\t\t\t\t  |\n|102 - Baurives Grandao sem Medo (Queijo, Tomate, Ovo, Presunto, Frango e Cebola) - R$ 1,50/und.  |\n|103 - Hamburguer - R$ 1,10/und.\t\t\t\t\t\t\t\t  |\n|104 - Cheeseburguer - R$ 1,30/und.\t\t\t\t\t\t\t\t  |\n|105 - Refrigerante - R$ 1,00/und\t\t\t\t\t\t\t\t  |\n");
    printf("|_________________________________________________________________________________________________|\n");
    scanf("%d", &codigo);

    switch(codigo){
        
        case 100 :
            printf("Quantos cachorro-quentes deseja?\n");
            scanf("%d", &quant);

            preco = 1.1*quant;
            printf("O valor total do pedido custou R$ %.2f.\n", preco);
            printf("\nMuito obrigado pela preferencia! Volte Sempre - Ivelao lhe aguarda com sorriso na testa!\n");
            break;

        case 101 :
            printf("Quantos Baurives Simples deseja?\n");
            scanf("%d", &quant);

            preco = 1.3*quant;
            printf("O valor total do pedido custou R$ %.2f.\n", preco);
            printf("\nMuito obrigado pela preferencia! Volte Sempre - Ivelao lhe aguarda com sorriso na testa!\n");
            break;
        
        case 102 :
            printf("Quantos Baurives Grandao sem Medo deseja?\n");
            scanf("%d", &quant);

            preco = 1.5*quant;
            printf("O valor total do pedido é de R$ %.2f.\n", preco);
            printf("\nMuito obrigado pela preferencia! Volte Sempre - Ivelao lhe aguarda com sorriso na testa!\n");
            break;
        
        case 103 :
            printf("Quantos hamburgeur's dejesa?\n");
            scanf("%d", &quant);

            preco = 1.1*quant;
            printf("O valor total do pedido é de R$ %.2f.\n", preco);
            printf("\nMuito obrigado pela preferencia! Volte Sempre - Ivelao lhe aguarda com sorriso na testa!\n");
            break;
        
        case 104 :
            printf("Quantos Cheeseburgeur's deseja?\n");
            scanf("%d", &quant);

            preco = 1.3*quant;
            printf("O valor total do pedido é de %.2f.\n", preco);
            printf("\nMuito obrigado pela preferencia! Volte Sempre - Ivelao lhe aguarda com sorriso na testa!\n");
            break;

        case 105 : 
            printf("Quantos refrigerantes deseja?\n");
            scanf("%d", &quant);

            preco = 1.0*quant;
            printf("O valor total do pedido é de %.2f.\n", preco);
            printf("\nMuito obrigado pela preferencia! Volte Sempre - Ivelao lhe aguarda com sorriso na testa!\n");
            break;
        
        default :
            printf("Codigo do pedido invalido! - Por favor repita o procedimento.\n");
    }

    system("pause");

}