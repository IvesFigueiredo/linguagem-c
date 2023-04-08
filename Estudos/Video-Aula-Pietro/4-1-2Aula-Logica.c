        //Programa de conhecimento em operador Lógico

#include <stdio.h>
#include <stdlib.h>

int main() {

    float m;

    printf("Informe a média da nota:\n");
    scanf("%f", &m);

    if(m >= 4.0 && m < 7.0){
        printf("A média foi %.2f. Tem direito a prova final.\n", m);
    }

    system("pause");
}