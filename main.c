//
//  Created by Mathieu Drapala on 20/01/2019.
//  Copyright © 2019 Mathieu Drapala. All rights reserved.
//

//includes
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    //Mes variables
    int menu;
    int play;
    int replay;
    
    int nombre;
    int nombreMystere = 0;
    
    int MIN = 0;
    int nb1 = 100;
    int nb2 = 1000;
    int nb3 = 10000;
    
    do
    {
        replay = 0;
        
        //Menu
        printf("== Bienvenue sur Le jeux Plus ou Moins ! ==\n\n");
        printf("1 - Entrer un nombre, entre 1 et 100 ! \n");
        printf("2 - Entrer un nombre, entre 1 et 1000 ! \n");
        printf("3 - Entrer un nombre, entre 1 et 10000 ! \n");
        printf("=> Entrer le nombre de votre choix ! ");
        scanf("%d",&menu);
        
        // Tire un nombre aléatoire
        srand(time(NULL));
        
        switch(menu)
        {
            case 1:
                nombreMystere = (rand() % (nb1 - MIN + 1)) + MIN;
                printf("=> Bonne chance ! \n ");
                break;
            case 2:
                nombreMystere = (rand() % (nb2 - MIN + 1)) + MIN;
                printf("=> Bonne chance ! \n");
                break;
            case 3:
                nombreMystere = (rand() % (nb3 - MIN + 1)) + MIN;
                printf("=> Bonne chance ! \n");
                break;
            default:
                printf("Veuillez saisir un nombre Valide !\n");
        }
        
        //boucle avec les conditions
        for(nombre = 0; nombre != nombreMystere;)
        {
            if(nombre > nombreMystere)
            {
                printf("Saisir un nombre inférieur à %d \n", nombre);
                scanf("%d", &nombre);
            }
            else if(nombre < nombreMystere)
            {
                printf("Saisir un nombre supérieur à %d \n", nombre);
                scanf("%d", &nombre);
            }
        }
        
        //Si j'ai trouver le résultat
        printf("Félicitation vous avez trouver le nombre mystére qui est : %d\n", nombreMystere);
        
        printf("Voulez-vous rejouer \n");
        printf("1. oui \n");
        printf("2. non \n");
        scanf("%d",&play);
        switch(play){
            case 1:
                printf("\n");
                replay = 1;
                break;
            case 2:
                printf("Au Revoir !\n");
                break;
        }
    }
    while (replay == 1);
}

