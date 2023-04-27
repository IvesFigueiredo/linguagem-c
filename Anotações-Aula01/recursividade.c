/*Assunto: Recursividade em linguagem C.
*/

#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
    int fun()
    {
        
    static int count =0;
    count++;
    return count;
    }

    int main ()
    {
system("cls");
    printf("%d\n", fun());
    printf("%d\n", fun());
    return 0 ;
    }