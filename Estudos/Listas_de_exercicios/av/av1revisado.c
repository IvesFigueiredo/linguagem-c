/*Nome: Ives Gabriel Figueiredo Santos Pinto
Assunto: Refazer a 1° avaliação realizada em Portugol em Lógica de Programação, para a Linguagem C

Objetivo: Realizar um programa, no qual um "funcionario" deve emitir bilhete e checar poltronas nos ônibus. Com dois destinos distintos contendo valores e ônibus diferentes.*/

#include <stdio.h>
#include <stdlib.h>

void fimPrograma() {     printf("\t\t\t________________________________________\n\t\t\t|\t\t\t\t\t|\n\t\t\t|\t   Direitos Reservados\t\t|\n\t\t\t|\t₢ Ives Figueiredo Pinto\t\t|\n\t\t\t|\t\tATÉ LOGO!\t\t|\n\t\t\t|_______________________________________|\n\n"); }

int main(void) {
system("cls");
    char retorno, menu;
    int i, j, qntdM = 0, qntdSF = 0, coluna[11] = {0,1,2,3,4,5,6,7,8,9,10}, colunas, linha;
    int onibus_SF[11][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}}; 
    char onibus_M[11][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    float valorMur=38.5, valorSF=65.5, resulM=0.0, resulSF=0.0;
    char op, destino, nomeM[50];

    do
    {
system("cls");
        printf("\t\tBem-vindo ao FSP_Highway.\n\n");
        
        printf("Qual operação deseja realizar?\n[1] - Emitir um novo bilhete.\n[2] - Verificar poltronas disponíveis.\n[3] - Relatório.\n[4] - Sair.");
        scanf(" %c", &op);
        switch(op)
        {
            case '1':
            do
            {
                printf("\nInforme o destino do passageiro: [Muritiba - [1] | São Felipe - [2] ]");
                scanf(" %c", &destino);
                switch(destino)
                {
                    case '1':
                        printf("\nPoltronas disponíveis do ônibus de Muritiba: [ 0 - São poltronas vagas | 1 - São poltronas ocupadas ]\n\n");
                        printf("\t0 1 2 3\n\n");
                        for(i=0;i<11;i++)
                        {
                            printf("%d\t", coluna[i]);
                            for(j=0;j<4;j++)
                            {
                                printf("%d ", onibus_M[i][j]);
                            }
                            printf("\n");
                        }
                        do
                        {
                            printf("\nInsira a localização da poltrona na linha:\t");
                            scanf("%d", &linha);
                            printf("Insira a localização da poltrona na coluna:\t");
                            scanf("%d", &colunas);
                            
                            if(linha<0 || linha>10)
                            {
                                printf("\nInforme as coordenadas corretamente [Linha entre 0 e 10] e [Coluna entre 0 e 4]\n");
                            } else
                            {
                                if(colunas<0 || colunas>10)
                                {
                                    printf("\nInforme as coordenadas corretamente [Linha entre 0 e 10] e [Coluna entre 0 e 4]\n");
                                }else
                                {
                                    if (onibus_M[linha][colunas] == 1){
                                        printf("\nEsta poltrona já está reservada!\n");
                                    }else
                                    {
                                        onibus_M[linha][colunas] = 1;
                                        qntdM++;
                                        printf("Digite o nome do passageiro:\t");
                                        scanf("%s", nomeM);
                                        printf("\nPassageiro: %s com destino a Muritiba com valor do bilhete de 38,50 reais", nomeM);
                                    }                                  
                                }
                            }

                        } while (i<0 || i>11 || j<0 || j>4);
                    break;

                    case '2': 
                        printf("\nPoltronas disponíveis do ônibus de São Felipe: [ 0 - São poltronas vagas | 1 - São poltronas ocupadas ]\n\n");
                        printf("\t0 1 2 3\n\n");
                        for(i=0;i<11;i++)
                        {
                            printf("%d", coluna[i]);
                            for(j=0;j<4;j++)
                            {
                                printf("%d", onibus_SF[i][j]);
                            }
                            printf("\n");
                        }
                        do
                        {
                            printf("\nInsira a localização da poltrona na linha:\t");
                            scanf("%d", &linha);
                            printf("Insira a localização da poltrona na coluna:\t");
                            scanf("%d", &colunas);
                            
                            if(linha<0 || linha>10)
                            {
                                printf("\nInforme as coordenadas corretamente [Linha entre 0 e 10] e [Coluna entre 0 e 4]\n");
                            } else
                            {
                                if(colunas<0 || colunas>10)
                                {
                                    printf("\nInforme as coordenadas corretamente [Linha entre 0 e 10] e [Coluna entre 0 e 4]\n");
                                }else
                                {
                                    if (onibus_SF[linha][colunas] == 1){
                                        printf("\nEsta poltrona já está reservada!\n");
                                    }else
                                    {
                                        onibus_SF[linha][colunas] = 1;
                                        qntdSF++;
                                        printf("Digite o nome do passageiro:\t");
                                        scanf("%s", nomeM);
                                        printf("\nPassageiro: %s com destino a São Felipe com valor do bilhete de 65,50 reais", nomeM);
                                    }                                  
                                }
                            }

                        } while (i<0 || i>11 || j<0 || j>4);
                    break;    
                }
            
            printf("\n\nDeseja emitir outro bilhete? [ s - Sim | n - Não ]\n");
            scanf(" %c", &menu);
            } while (menu != 'n' && menu != 'N' );
            break;
            case '2':
            do
            {
                
                printf("Deseja verificar a disponibilidade de poltronas de qual ônibus? [ 1 - Muritiba | 2 - São Felipe]\n");
                scanf(" %c", &destino);
                switch(destino)
                {
                    case '1':
                        for(i=0;i<11;i++)
                        {
                            for(j=0;j<4;j++)
                            {
                                printf("\t%d  ", onibus_M[i][j]);
                            }
                            printf("\n");
                        }
                    break;
                    
                    case '2':
                        for(i=0;i<11;i++)
                        {
                            for(j=0;j<4;j++)
                            {
                                printf("\t%d  ", onibus_SF[i][j]);
                            }
                            printf("\n");
                        }
                    break;
                }
            printf("\nDeseja realizar outra verificação? [ s - Sim | n - Não ]\n");
            scanf(" %c", &menu);
            } while (menu != 'n' && menu != 'N' );
            break;            
            case '3':
            do
            {
                printf("\nQual relatório deseja? [ 1 - Muritiba | 2 - São Felipe ]\n");
                scanf(" %c", &op);
                switch(op)
                {
                    case '1':
                        resulM = valorMur*qntdM;
                        printf("\nPara Muritiba há %2d passageiros.\nO valor total das passagens foi de %.2f reais.\nO lucro total da viagem é de %.2f reais.\n", qntdM, resulM, resulM*0.25);
                    break;

                    case '2':
                    resulSF=valorSF*qntdSF;
                        printf("\nPara Muritiba há %2d passageiros.\nO valor total das passagens foi de %.2f reais.\nO lucro total da viagem é de %.2f reais.\n", qntdSF, resulSF, resulSF*0.25);
                    break;
                }
            printf("\nDeseja buscar um novo relatório? [ s - Sim | n - Não ]\n");
            scanf(" %c", &menu);
            } while (menu != 'n' && menu != 'N' );
            break;
            case '4':
                if(qntdM < 10 && qntdSF < 10)
                {
                    printf("\nInfelizmente as viagens para Muritiba e São Felipe serão remarcadas por não atingirem a cota mínima de 10 passageiros.\n");
                }
                if(qntdM < 10 && qntdSF > 10)
                {
                    printf("\nInfelizmente a viagem para Muritiba será remarcada por não atingir a cota mínima de 10 passageiros.\n");
                }
                else if (qntdSF < 10 && qntdM > 10)
                {
                    printf("\nInfelizmente a viagem para São Felipe será remarcada por não atingir a cota mínima de 10 passageiros.\n");
                }else if (qntdM > 10 && qntdSF > 10)
                {
                    printf("\nFinalizamos aqui as operações.\n\t\tBoa viagem!\n");
                }
            break;

            default :
            printf("\nOperação inválida.\n");
            break;
        }             

     printf("\nDeseja retornar ao Menu Principal? [ s - Sim | n - Não ]\n");
     scanf(" %c", &retorno);
    }while(retorno != 'n' && retorno != 'N');
fimPrograma();
}
