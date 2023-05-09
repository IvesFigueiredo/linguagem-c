#include <stdio.h>
#include <stdlib.h>

#define DIM 2

int main(void) {
system("cls");

    typedef struct 
    {
        char nome[30];
        float matematica, fisica, media;
    } Alunos;

    Alunos alunos[DIM];
    int count;

    for(count = 0; count < DIM; count++)
    {
        printf("\nNome do %dº aluno: ", count+1);
        scanf("%s", alunos[count].nome);    
        printf("\nNota de matemática do %dº aluno: ", count+1);
        scanf("%f", &alunos[count].matematica);
        printf("\nNota de física do %dº aluno: ", count+1);
        scanf("%f", &alunos[count].fisica);


    alunos[count].media = (alunos[count].matematica + alunos[count].fisica) / 2;
    }
        
    printf("\nExibindo nomes e medias:\n");

    for (count = 0; count < DIM; count++)
    {
        printf("\n\nAluno %d\n", count+1);
        printf("Nome: %s\n", alunos[count].nome);
        printf("Media: %2.f", alunos[count].media);
    }
 
}