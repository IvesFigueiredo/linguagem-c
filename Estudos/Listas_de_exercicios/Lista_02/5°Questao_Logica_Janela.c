// Sistema de automação para verificar condições de janelas fechadas ou abertas [F=fechada e A=aberta]

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

bool estado;
char jan1, jan2;

jan1 = 'f';
jan2 = 'a';

printf("Janela 01 aberta? %c\n", jan1 == 'a');

if(jan1 =='a' || jan2 == 'a') {
printf("Alguma janela aberta? %d\n", estado);
printf("Alarme desligado? %d\n", !estado);
} else if(jan1 == 'a'&& jan2 == 'a'){
    printf("Todas as janelas abertas? %d\n", estado);
}



system("pause");
}
