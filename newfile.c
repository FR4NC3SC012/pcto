#include <stdio.h>

float somma(int a, int b)
{
    int somma1 = a + b;
    printf("La somma è: &f", somma1);
    return(somma1);
}
float sottrazione(int a, int b)
{
    int differenza1 = a - b;
    printf("La somma è: &f", differenza1);
    return(differenza1);
}
float prodotto(int a, int b)
{
    int prodotto = a * b;
    printf("La somma è: &f", somma1);
    return(moltiplicazione1);
}
float divisione(int a, int b)\
{
    int divisione1 = a / b;
    printf("La somma è: &f", divisione1);
    return(divisione1);
}

int main ()
{
    int x;
    int y;
    char richiesta; 

    printf("inserire ll valore di x\n" );
    scanf("%d", &X);

    printf("inserire ll valore di y\n" );
    scanf("%d", &Y);

    printf("inserire operazione richiesta/n" );
    printf("a per addizione \n b per prodotto \n, c per sottrazione \n, d per divisione\n ")
    scanf("%c", &richiesta);
     
    
    if(richiesta==a)
    {
        addizione(x+y)
    }
    if(richiesta==b)
    {
        prodotto(x*y)
    }
    if(richiesta==c)
    {
        printf("vuoi fare ")
    }

    return (0);
}