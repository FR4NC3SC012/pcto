#include <stdio.h>

int main() {
    int lato1;
    int lato2;
    int lato3;
    
    printf("Inserire la lunghezza del primo lato: ");
    scanf("%d", &lato1);

    printf("Inserire la lunghezza del secondo lato: ");
    scanf("%d", &lato2);

    printf("inserire la lunghezza del terzo lato: ");
    scanf("%d", &lato3);

    if (lato1+lato2< lato3 ||lato2+lato3< lato1 ||lato1+lato3< lato2 || lato1 <=0 || lato2 <=0 || lato3 <=0)
    { 
        printf("non è un triangolo");
    }
    else if (lato1 != lato2 && lato2 != lato3 && lato1 != lato3)
    {
        printf("Il triangolo è scaleno.\n");
    } 
    else if (lato1 == lato2 && lato2 == lato3)
    {
        printf("Il triangolo è equilatero.\n");
    } 
    else 
    {
        printf("Il triangolo è isoscele.\n");
    }
   
    return 0;
}
