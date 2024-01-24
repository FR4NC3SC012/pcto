#include <stdio.h>

int main ()
{
    char c;
    printf("inserisci un carattere");
    scanf ("%c", &c) ;
    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
    printf("la lettera è una vocale");
    }
    else if (c=='b' || c=='c' || c=='d' || c=='f' || c=='g' || c=='h' || c=='l' || c=='m' || c=='n' || c=='p' || c=='q' || c=='r' || c=='s' || c=='t' ||c=='v' || c=='z')
    {
    printf("la lettera è una consonante");
    }
    else if ( c=='y' || c=='x' || c=='j' || c=='k' )
    {
    printf("la lettera è una lettera ingles non o che sia");
    }
    else 
    {
    printf("non è una lettera");
    }
}