#include <stdio.h>

int main() 
{
    int anno;
    int differenza;

    printf("Inserire l'anno di nascita: ");
    scanf("%d", &anno);

    if (anno > 2024) 
    {
        printf("Non mentire!.\n");
    } 
    else if (anno < 1969) 
    {
        differenza = 1969 - anno;
        printf("Sei nato %d anni prima del 1969.\n", differenza);
    } 
    else if (anno == 1969) 
    {
        printf("Sei nato nell'anno 1969!\n");
    } 
     else if (anno < 1910) 
    {
        printf("Sei uno zombie o gesu cristo??!\n");
    } 
    else 
    {
        differenza = anno - 1969;
        printf("Sei nato %d anni dopo il 1969.\n", differenza);
    }

    return 0;
}
