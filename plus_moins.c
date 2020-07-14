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
        int nombreTape =0, rejouer=0, coups =0, nombres_essaie =0, modeJeu =0, niveauJeu =0;
	const int MAX = 100, MIN = 1;
	srand(time(NULL));
	valeur_trouver = (rand() % (MAX - MIN + 1)) + MIN;

	return plus_moins( valeur_trouver);
        if (modeJeu == 1)
              {
	          printf ("Choisissez un niveau ! :\n1 = Facile\n2 = Moyen\n3 = Difficile\n")


                  do     {
				printf ("Votre choix ? ");
				scanf ("%d", &niveauJeu);
				printf ("Vous avez choisis le niveau %d\n\n", niveauJeu);
			  }switch (niveauJeu );
                                   {
				        case 1:
					          Max = 100;
					          valeur_trouver = (rand() %(nombreMax - MIN + 1) ) + MIN;
					          coupsRestant = 200;
					break;
				        case 2:
					          Max = 600;
					          valeur_trouver = (rand() %(nombreMax - MIN + 1) ) + MIN;
					          nombres_essaie = 25;
					break;
				        case 3:
					          Max = 1100;
					          valeur_trouver = (rand() %(nombreMax - MIN + 1) ) + MIN;
					          nombres_essaie = 10;
					break;     }}
} 



