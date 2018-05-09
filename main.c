#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, const char * argv[]) {
    
    int utilisateur = 0;
    int nombreMystere = 0;
    int coup = 0;
    int menu = 0;
    int i = 0;
    int jouer = 0;
    int rejouer = 0;
    const int MAX1 = 100, MIN1 = 1;
    const int MAX2 = 1000, MIN2 = 1;
    const int MAX3 = 10000, MIN3 = 1;
    
    

    do
    {
        rejouer = 0;
    printf("== Bienvenue sur Le jeux Plus ou Moins ! ==\n\n");
    printf("1 - Entrer un nombre, entre 1 et 100 ! \n");
    printf("2 - Entrer un nombre, entre 1 et 1000 ! \n");
    printf("3 - Entrer un nombre, entre 1 et 10000 ! \n");
    printf("> Entrer le nombre de votre choix ! ");
    scanf("%d",&menu);
    
    srand(time(NULL));
    
    switch(menu)
    {
        case 1:
            
            nombreMystere = (rand() % (MAX1 - MIN1 + 1)) + MIN1;
            i += 1;
            printf("> Bonne chance ! \n ");
            break;
        case 2:
            
            nombreMystere = (rand() % (MAX2 - MIN2 + 1)) + MIN2;
            i += 1;
            printf("> Bonne chance ! \n");
            break;
        case 3:
            
            nombreMystere = (rand() % (MAX3 - MIN3 + 1)) + MIN3;
            i += 1;
            printf("> Bonne chance ! \n");
            break;
        default:
            printf("Veuillez saisir un nombre Valide !\n");
    }
    
    
    
    if (i == 1)
    {
        while(utilisateur != nombreMystere){
        printf("> ");
        scanf("%d", &utilisateur);
        coup++;
        
        if(utilisateur == nombreMystere){
            printf("Bravo, vous avez trouvé le nombre mystère en %d coup \n", coup);
        }
        else if(nombreMystere >= utilisateur){
            printf("Le nombre rechercher est plus grand que le nombre rechercher  \n");
        }
        else if(nombreMystere <= utilisateur){
            printf("Le nombre rechercher est plus petit que le nombre rechercher  \n");
        }
     }
        
        printf("Voulez-vous rejouer \n");
        printf("1. oui \n");
        printf("2. non \n");
        scanf("%d",&jouer);
        switch(jouer){
            case 1:
                printf("\n");
                rejouer = 1;
                break;
            case 2:
                printf("Au Revoir !");
                break;
        }
     }
    } while (rejouer == 1);
    }
