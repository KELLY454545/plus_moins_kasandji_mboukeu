#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int plus_moins (int value)
{
    int choix_joueur;
    printf("%d",value);
    do
    {
  
        printf("Quel est le nombre ? \n");
        scanf("%d", &choix_joueur);

        if (value > choix_joueur)
	{
            printf("plus !\n");
	    printf("mauvais numeros envoyer un autre\n");
            scanf("%d", &choix_joueur);


            //scanf("%d", &choix_joueur);
	}
        else if (value < choix_joueur)
	{ 
	    printf("moins !\n");
            printf("mauvais numeros envoyer un autre\n");
            scanf("%d", &choix_joueur);


 
            //scanf("%d", &choix_joueur);
	}
        else
            printf ("Bingo\n");
    } while (choix_joueur != value);

}

int main()
{
	int valeur_trouver = 0, choix_joueur = 0;
        const int MAX = 100, MIN = 1;
	srand(time(NULL));
        valeur_trouver = (rand() % (MAX - MIN + 1)) + MIN;

	return plus_moins( valeur_trouver);
} 



