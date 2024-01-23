#include <stdio.h>
#include <string.h>

int main() {
    char choice[50]; 
    printf("Che sei- uomo o donna?? ");
    scanf("%s", choice);
    for (int i = 0; i < strlen(choice); i++) {
            choice[i] = tolower(choice[i]);
        }

    if (strcmp(choice, "uomo"))
    {
     
        printf("sbagliatooo - mi spiace ma mi piace la topa\n");
    } 

    else  {

        printf("quanti hanni hai? ");
        scanf(" %d");

    
        if ("%d" >= 23) 
        {
            printf("Non esco con le milf\n");
        } 
        else if ("%D" >= 15 && "%d" <= 22) 
        {
            printf("Sei proprio patata, dammi l'Instagram\n");
        } 
        else 
        {
            printf("Mi spiace, ma non rischio le manette\n");
        }
   
    }
    return 0;
}