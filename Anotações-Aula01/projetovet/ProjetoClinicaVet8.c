// Data de entrega: 20/06/23
// Versão 0.8.0

/*Modificações no código:

//Modificado por Ielber Pellegrini 31/05/2023 Versão 0.2 (ajuste do código de Jeferson Oliveira (retirada de if para implementação de "do while")
//Estrutura de menu feita por Ielber Pellegrini 31/05/2023 (Estrutura de menus da recepcionista quase completo (cadastro do cliente completo))
//Correção feita por Ielber Pellegrini 31/05/2023 da linha 42 (faltou mais um tipo de validação para que desse o erro esperado ao errar usuário e senha)
da Modificado por Filipe Sampaio 31/05/2023 ("corrigi a validação do usuário e senha e passei para uma função utilizando ponteiros")
//Modifição feita por Ielber Pellegrini 01/06/2023 ("Modificação de exibição do mostrar fila adicionando mais informações para o usuário")
//Removido por Ielber Pellegrini 01/06/2023 ("Opção de dados do cliente para o veterinário")
//Adicionado por Ielber Pellegrini 01/06/2023 ("Faltava algumas opções de preenchimento e de mostragem nos dados do cliente que foram colocados")
//Adicionado por Ielber Pellegrini 01/06/2023 ("Adicionado no menu do veterinário (na parte de atender a fila) os dados do cliente que foram removidos do menu e colocados
junto com a mostragem da função exibir fila para que o veterinário saiba quem atender e quem remover da fila")

//Iniciado por Filipe Sampaio dia 30/05/2023 (início da estrutura)  Versão 0.0,
//Modificado por Filipe Sampaio 31/05/2023 ("corrigi a validação do usuário e senha e passei para uma função utilizando ponteiros")
//Modificado por filipe  31/05/2023 corrigi a exibição da fila e o menu que retornava sempre para a escolha entre "Recepcionista; veterinário e cliente".

//Estruturado por Jeferson Oliveira dia 31/05/2023 Versão 0.1 (montagem do principio do programa, inicio menu da opção recepcionista)
//Adicionado por Jeferson Oliveira 31/05/2023 ("Esquema de cores dos textos do printf")
//Adicionado por Jeferson Oliveira 31/05/2023 ("cadastro de dados dos clientes pelo recepcionista e impressão dos dados em tela")
//Adicionado por Jeferson Oliveira 31/05/2023 ("Adicionado a função para mostrar fila, adicionado a opção de adicionar clientes a fila segundo o menu da recepção")
//Correção a função validar UsuarioSenha 31/05/2023 ("adicionado uma validação para para printar a mensagem de erro caso o usuário seja falso, fora do laço de repetição")
//Adicionado por Jeferson Oliveira 01/06/2023 ("Ativação da função voltar ao menu principal utilizando o goto com a marcação de texto")
//Adicionado por Jeferson Oliveira 01/06/2023 ("Ativação da opção 3 do Menu principal, que é sair do sistema, antes disso opção sair estava ficando em loop")
//Corrigido por Jeferson Oliveira 01/06/2023 ("O do while do menu principal adicionado por Ielber estava em loop, na escolha de qualquer
opção porque a validação era executar enquanto o usuário fosse verdadeiro, causando um loop infinito enquanto o usuário fosse verdadeiro")
//Adicionado por Jeferson Oliveira 01/06/2023 ("do while no menu da recepcionista para exibir mensagem de erro em caso de opção invalida, e não retornar direto ao menu principal em caso de erro")
//Adicionado por Jeferson Oliveira 01/06/2023 ("do while no menu do veterinário para exibir mensagem de erro em caso de opção invalida, e não retornar direto ao menu principal em caso de erro")
//Adicionado por Jeferson Oliveira 01/06/2023 ("Remover da fila, no menu veterinário é a opção de atender a fila")
//Adicionad a opção do recepcionista por o cliente recém cadastrado na fila (Diretamente) - ln 229 - 254
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <conio.h>

#define U_TAMANHO 20
#define S_TAMANHO 20
#define T_FILA 20
#define TOTAL_USUARIOS 6
int contador = 0;

typedef struct ProjetoClinicaVet3
{
    int posicoes[T_FILA];
    char codigoCliente[U_TAMANHO];
    char nomeDoCliente[U_TAMANHO][S_TAMANHO];
    char nomeDoAnimal[U_TAMANHO][S_TAMANHO];
    char especie[U_TAMANHO][S_TAMANHO];
    char sexo[U_TAMANHO][S_TAMANHO];
    char raca[U_TAMANHO][S_TAMANHO];
    char castrado[U_TAMANHO][S_TAMANHO];
    char contatoOuTelefone[U_TAMANHO][S_TAMANHO];
} Dados;

void mostrar_fila(Dados dado)
{
    system("cls");
    printf("\033[4;34mFila de atendimento - iSystem PetShoper - Versão 1.0\033[0m\n\n");

    for (int i = 0; i < contador; i++)
    {
        printf("\nSenha: (%d) Código do cliente: %d ", i, dado.posicoes[i]); // removido o +1 por ielber para quando for digitar o código da fila, não haver erro por parte do veterinário para remover
    }
    getch();
}

void remover_fila(int posicao, Dados *dado)
{
    if (posicao >= 0 && posicao < contador)
    {
        for (int i = posicao; i < contador - 1; i++)
        {
            dado->posicoes[i] = dado->posicoes[i + 1];
        }
        contador--;
        system("cls");
        printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
        printf("Atendimento efetuado.\n");
    }
    else
    {
        system("cls");
        printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
        printf("Posição de senha inválida!\n");
    }
    getch();
}

void validarUsuarioSenha(int *usuarioValido, char usuario[], char usuariosSalvos[][U_TAMANHO], char senha[], char senhasSalvas[][S_TAMANHO])
{
    for (int i = 0; i < TOTAL_USUARIOS; i++)
    {
        // aqui estamos usando o strcmp para comparar as strings usuario e senha com as strings usuariosSalvos e senhasSalvas por posição do contador i
        if (strcmp(usuario, usuariosSalvos[i]) == 0 && strcmp(senha, senhasSalvas[i]) == 0)
        {
            *usuarioValido = 1;
            break;
        }
    }
    if (*usuarioValido == 0)
    {
        system("cls");
        printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
        printf("\033[0;31mNome de usuário ou senha incorretos!\033[0m\n");
        sleep(1);
    }
}

int main(void)
{
    void *realloc(void *ptr, size_t size);

    Dados dado; // Declarando a struct para cadastro de dados do cliente

    // declarando duas strings que recebem seus tamanhos pelo define U_TAMANHO 20 e S_TAMANHO 20
    char usuario[U_TAMANHO], senha[S_TAMANHO];
    // declarando as strings que irão armazenar os usuários e senhas salvos,
    char usuariosSalvos[TOTAL_USUARIOS][U_TAMANHO] = {"alexandre", "carlos", "felipe", "ives", "ielber", "jeferson"};
    char senhasSalvas[TOTAL_USUARIOS][S_TAMANHO] = {"123", "456", "789", "101", "112", "131"};
    // variaveis primeiro codigo, escrito por Sampaio
    int resposta, respostaRecepcao, respostaVeterinario, codigoCliente, valor;

    int usuarioValido = 0; // variavel que verifica se o usuário é verdadeiro ou falso
    char filacadastro;
    // enquanto o valor do usuarioValid for falso ele irá repetir até ser verdadeiro
    while (!usuarioValido)
    {
        system("cls");
        printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
        printf("\033[0;32mUsuário:\033[0m ");
        scanf("%s", usuario);
        printf("\033[0;32mSenha:\033[0m ");
        scanf("%s", senha);

        // foi adicionado um laço de repetição for para verificar todas as posições das strings
        validarUsuarioSenha(&usuarioValido, usuario, usuariosSalvos, senha, senhasSalvas);
    } // Fechamento do while mais acima para só repetir se o usuárioValido for falso

    system("cls");
    printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
    printf("\033[0;42;34mLogin bem-sucedido!\033[0m\n");
    // adicionei <unistd.h> para poder usar o sleep(), aguardar alguns segundos antes de ir para a proxima linha de código
    sleep(3);

menu_principal: // marca para ser utilizado no goto
    do
    {
        system("cls");
        printf("\033[4;34mMenu Principal - iSystem PetShoper - Versão 1.0\033[0m\n\n");
        printf("\033[1;30m1 - Recepção\n2 - Veterinário\n3 - Sair\033[0m\n\n");
        printf("\033[4;34mDigite opção:\033[0m ");
        scanf("%d", &resposta);
        switch (resposta)
        {
        case 1:
            do
            {
                system("cls");
                printf("\033[4;34mMenu Recepcionista - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                printf("\033[1;30m1 - Fila de atendimento\n2 - Cadastro do Cliente\n3 - Dados do cliente\n4 - Voltar ao menu principal\033[0m\n\n");
                printf("\033[4;34mDigite opção:\033[0m ");
                scanf("%d", &respostaRecepcao);
                switch (respostaRecepcao)
                {
                case 1:
                    system("cls");
                    printf("\033[4;34mFila de atendimento - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                    printf("\033[1;30m1 - Exibir a fila\n2 - Adicionar a fila\033[0m\n");
                    printf("\033[4;34m\nDigite opção:\033[0m ");
                    scanf("%d", &respostaRecepcao);
                    switch (respostaRecepcao)
                    {
                    case 1:
                        mostrar_fila(dado);
                        break;

                    case 2:
                        if (contador == T_FILA)
                        {
                            system("cls");
                            printf("\033[4;34mFila de atendimento - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                            printf("\033[1;30mA fila está cheia\033[0m\n");
                            getch();
                        }
                        else
                        {
                            system("cls");
                            printf("\033[4;34mFila de atendimento - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                            printf("\033[1;30mDigite o código do cliente que será atendido e adicionado na fila:\033[0m ");
                            scanf("%d", &valor);
                            dado.posicoes[contador] = valor;
                            contador++;
                        }
                        break;

                    case 3:
                        system("cls");
                        printf("Voltar ao menu\n");
                        system("pause");
                        break;
                    }
                    break;

                case 2:
                    system("cls");
                    printf("\033[4;34mCadastro Do Cliente - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                    printf("\033[1;30mDigite codigo do cliente:\033[0m ");
                    scanf("%d", &codigoCliente);
                    printf("\033[1;30mDigite o nome do cliente:\033[0m ");
                    scanf("%s", dado.nomeDoCliente[codigoCliente]);
                    printf("\033[1;30mDigite o nome do animal:\033[0m ");
                    scanf("%s", dado.nomeDoAnimal[codigoCliente]);
                    printf("\033[1;30mDigite a espécie do animal:\033[0m ");
                    scanf("%s", dado.especie[codigoCliente]);
                    printf("\033[1;30mDigite o sexo do animal:\033[0m ");
                    scanf("%s", dado.sexo[codigoCliente]); // não tinha sido adicionado antes
                    printf("\033[1;30mDigite a raça do animal:\033[0m ");
                    scanf("%s", dado.raca[codigoCliente]);
                    printf("\033[1;30mDigite se o animal é castrado:\033[0m ");
                    scanf("%s", dado.castrado[codigoCliente]);
                    printf("\033[1;30mDigite um contato do cliente, e-mail ou telefone:\033[0m ");
                    scanf("%s", dado.contatoOuTelefone[codigoCliente]);

                    system("cls");
                    printf("\033[1;30mDeseja ingressar na fila de atendimento? [ s - Sim | n - Não ]\033[0m \n");
                    scanf(" %c", &filacadastro);
                    if (filacadastro == 'n')
                    {
                        // seguir a diante
                    }
                    else
                    {
                        if (contador == T_FILA)
                        {
                            system("cls");
                            printf("\033[4;34mFila de atendimento - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                            printf("\033[1;30mA fila está cheia\033[0m\n");
                            getch();
                        }
                        else
                        {
                            system("cls");
                            printf("\033[4;34mFila de atendimento - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                            printf("\033[1;30mDigite o código do cliente que será atendido e adicionado na fila:\033[0m ");
                            scanf("%d", &valor);
                            dado.posicoes[contador] = valor;
                            contador++;
                        }
                    }
                    break;

                case 3:
                    system("cls");
                    printf("\033[4;34mDados do cliente - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                    printf("\033[1;30mDigite codigo do cliente:\033[0m ");
                    scanf("%d", &codigoCliente);
                    system("cls");
                    printf("\033[4;34mDados do cliente - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                    printf("\033[1;30mCodigo:\033[0m %d", codigoCliente);
                    printf("\033[1;30m\nNome do Cliente:\033[0m %s", dado.nomeDoCliente[codigoCliente]);
                    printf("\033[1;30m\nNome do Pet:\033[0m %s", dado.nomeDoAnimal[codigoCliente]);
                    printf("\033[1;30m\nEspécie:\033[0m %s", dado.especie[codigoCliente]);
                    printf("\033[1;30m\nSexo:\033[0m %s", dado.sexo[codigoCliente]); // adicionado o sexo que estava faltando nos dados do cliente por ielber
                    printf("\033[1;30m\nRaça:\033[0m %s", dado.raca[codigoCliente]); // adicionado a raça que estava faltando nos dados do cliente por ielber
                    printf("\033[1;30m\nCastrado:\033[0m %s", dado.castrado[codigoCliente]);
                    printf("\033[1;30m\nContato:\033[0m %s", dado.contatoOuTelefone[codigoCliente]);
                    getch();
                    break;

                case 4:
                    goto menu_principal; // utilizando o goto menu_principal ele faz com que o programa pule para a marca menu_principal dentro do código;
                    break;

                default:
                    system("cls");
                    printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
                    printf("\033[0;31mOpção invalida\033[0m");
                    sleep(2);
                    break;
                }
            } while (respostaRecepcao != 4);
            break;

        case 2:
            do
            {
                system("cls");
                printf("\033[4;34mMenu Veterinário - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                printf("\033[1;30m1 - Fila de atendimento\n2 - Voltar ao menu principal\033[0m\n\n");
                printf("\033[4;34mDigite opção:\033[0m ");
                scanf("%d", &respostaVeterinario);
                switch (respostaVeterinario)
                {
                case 1:
                    system("cls");
                    printf("\033[4;34mFila de atendimento - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                    printf("\033[1;30m1 - Exibir a fila\n2 - Atender a fila\033[0m\n");
                    printf("\033[4;34m\nDigite opção:\033[0m ");
                    scanf("%d", &respostaVeterinario);
                    switch (respostaVeterinario)
                    {
                    case 1:
                        mostrar_fila(dado);
                        break;
                    case 2:
                        mostrar_fila(dado);
                        // printf("\033[4;34mFila de atendimento - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                        printf("\033[1;30m\nDigite codigo do cliente a ser atendido:\033[0m ");
                        scanf("%d", &codigoCliente);
                        system("cls");
                        printf("\033[4;34mDados do cliente - iSystem PetShoper - Versão 1.0\033[0m\n\n");
                        printf("\033[1;30mCodigo:\033[0m %d", codigoCliente);
                        printf("\033[1;30m\nNome do Cliente:\033[0m %s", dado.nomeDoCliente[codigoCliente]);
                        printf("\033[1;30m\nNome do Pet:\033[0m %s", dado.nomeDoAnimal[codigoCliente]);
                        printf("\033[1;30m\nEspécie:\033[0m %s", dado.especie[codigoCliente]);
                        printf("\033[1;30m\nSexo:\033[0m %s", dado.sexo[codigoCliente]);
                        printf("\033[1;30m\nRaça:\033[0m %s", dado.raca[codigoCliente]);
                        printf("\033[1;30m\nCastrado:\033[0m %s", dado.castrado[codigoCliente]);
                        printf("\033[1;30m\nContato:\033[0m %s", dado.contatoOuTelefone[codigoCliente]);
                        getch();
                        mostrar_fila(dado);
                        printf("\033[4;34m\nDigite senha que foi atendida:\033[0m ");
                        scanf("%d", &valor);
                        remover_fila(valor, &dado);
                        break;
                    default:
                        break;
                    }
                    break;

                case 2:
                    goto menu_principal;
                    break;

                default:
                    system("cls");
                    printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
                    printf("\033[0;31mOpção invalida\033[0m");
                    sleep(2);
                    break;
                }
            } while (respostaVeterinario != 3);
        case 3:
            system("cls");
            printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
            printf("\033[0;42;34mSaida realizada com sucesso\033[0m");
            sleep(2);
            break;

        default:
            system("cls");
            printf("\033[4;34miSystem PetShoper - Versão 1.0\033[0m\n\n");
            printf("\033[0;31mOpção invalida\033[0m");
            sleep(2);
            break;
        }
    } while (resposta != 3);
}