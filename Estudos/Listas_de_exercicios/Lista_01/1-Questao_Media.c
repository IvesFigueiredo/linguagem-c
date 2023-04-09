        // Programa para Calcular a Média e Verificar se o aluno foi aprovado|recuperação|reprovado.

#include <stdio.h>
#include <stdlib.h>

    char nome[50];
    float nota1, nota2, nota3, media = 0.0;

int main() {

    printf("Informe o nome do aluno:\n");
    scanf("%s", nome);

    printf("Informe a primeira nota do aluno:\n");
    scanf("%f", &nota1);
        if(nota1 < 0 || nota1 > 10 ) {
            printf("Valor da nota incorreto, o valor atribuido sera 0.\n");
            nota1 = 0.0;
        }
    printf("Informe a segunda nota do aluno:\n");
    scanf("%f", &nota2);
        if(nota2 < 0 || nota2 > 10) {
            printf("Valor da nota incorreto, o valor atribuido sera 0.\n");
            nota2 = 0.0;
        }
    printf("Informe a terceira nota do aluno:\n");
    scanf("%f", &nota3);
        if(nota3 < 0 || nota3 > 10) {
            printf("Valor da nota incorreto, o valor atribuido sera 0.\n");
            nota3 = 0;
        }

    media = (nota1+nota2+nota3)/3;

    if (media >= 7.0 && media <= 10.0) {
        printf("Aluno(a): %s, aprovado por media, %.2f.\n", nome, media);
    } else if (media >= 4.0 && media < 7.0) {
        printf("Aluno(a): %s, em recuperacao com media, %.2f.\n", nome, media);
    } else {
        printf("Aluno: %s, reprovado por media, %.2f.\n", nome, media);
    }

    system("pause");

}