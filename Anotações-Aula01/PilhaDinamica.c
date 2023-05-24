#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct Pilha
{
    int topo;
    int capa; //capacidade
    float *pElemento; //Ponteiro
};

void criarpilha(struct Pilha *p, int c) //ponteiro tipo Pilha
{
    //declarnado as variaveis do tipo Pilha
    p -> topo = -1; // posição nula, pois 0 é posição inicial
    p -> capa = c;
    p -> pElemento = (float *)malloc(c * sizeof(float)); // Como se fosse um vetor chamado pElemento
}

int estavazia(struct Pilha *p)
{
    if (p -> topo == -1)
    {
        return 1; //true
    } else {
        return 0; // False
    }
}

int estacheia(struct Pilha *p)
{
    if ( p ->topo == p ->capa -1){
        return 1; // true
    } else {
        return 0; //false
    }
}

void empilhar(struct Pilha *p, float v)
{
    p->topo++; // A ordem é importante, pois irá iniciar a pilha na posição 0
    p->pElemento[p->topo] = v;
}

float desempilhar(struct Pilha *p)
{
    float aux = p->pElemento[p->topo];
    p->topo--;
    return aux;
    //free(p->topo);
}

float retornatopo(struct Pilha *p)
{
    return p-> pElemento[p->topo];
}

int main(void) {
system("cls");



}