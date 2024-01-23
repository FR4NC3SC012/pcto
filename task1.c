#include <stdio.h>
#include <string.h>

int main() {
    char choice[50]; 
    printf("Che squadra tifi?? ");
    scanf("%s", choice);

    // Convert input to lowercase for case-insensitive comparison
    for (int i = 0; i < strlen(choice); i++) {
        choice[i] = tolower(choice[i]);
    }

    if (strcmp(choice, "roma") == 0 || strcmp(choice, "la magica") == 0 || strcmp(choice, "as roma") == 0
        || strcmp(choice, "tutto ma non lazio") == 0 || strcmp(choice, "romaa") == 0 || strcmp(choice, "sono un lupacchiotto") == 0) 
    {
        printf("Bono - so d'accordo\n");
    } 
    else if (strcmp(choice, "lazio") == 0 || strcmp(choice, "sono un' aquilotto") == 0 || strcmp(choice, "a lazio") == 0
        || strcmp(choice, "la lazio") == 0 ) 
    {
        printf("lazziale demmerda mori\n");
    }
    
    else if (strcmp(choice, "juve") == 0 || strcmp(choice, "juventus") == 0 || strcmp(choice, "inter") == 0
        || strcmp(choice, "milan") == 0 ) 
    {
        printf("scemoo, sei la vergogna di questo paese\n");
    }

    else if (strcmp(choice, "napoli") == 0 || strcmp(choice, "cagliari") == 0 || strcmp(choice, "palermo") == 0
        || strcmp(choice, "avellino") == 0 ) 
    {
        printf("terroneeeee\n");
    }
    else if (strcmp(choice, "firenze") == 0 || strcmp(choice, "venezia") == 0 || strcmp(choice, "verona") == 0
        || strcmp(choice, "monza") == 0 ) 
    {
        printf("bella città ma squadra di scarsi\n");
    }
    else {
        printf("squadra inferiore- la conosci solo te\n");
    }

    return 0;
}