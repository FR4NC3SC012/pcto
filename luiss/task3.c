#include <stdio.h>

int main ()
{
    float anno;
    printf("Inserisci anno");
    scanf("%f", &anno);

    if ("anno%4 == 0 && anno%100 != 0 || anno%400 == 0")
       {printf("anno bisestile"); } 
    else
        {printf("anno non bisestile"); }

    return 0;
}