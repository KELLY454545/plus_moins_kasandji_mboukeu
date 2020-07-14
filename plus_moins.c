

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere = 0, nombreEntre = 0;
    int compteurDeCoups = 0;
    int continuerPartie = 1;
    int modeDuJeu = 0;
    int niveauDeDifficulte = 0;
    int finDuJeu;
    int max = 100, min = 1;

    //Initialise le générateur de nombres aléatoires
    srand(time(NULL));


    /* La boucle du programme. Elle se répète tant que l'utilisateur
    n'a pas trouvé le nombre mystère */

    while(continuerPartie!=0)
    {
        finDuJeu = 1;
        printf("\t*****************MENU PRINCIPALE*****************\n");
        printf("Mode 1 joueur tapez 1\nMode 2 joueurs tapez 2\nVotre choix : ");
        scanf("%d", &modeDuJeu);
        printf("\t*****************NIVEAU DU JEU*****************\n");
        printf("Niveau entre 1 et 100 : taper 1: facile\nNiveau entre 1 et 1000 : taper 2: moyen\nNiveau entre 1 et 10000 : taper 3 : difficile\n");
        printf("Votre choix : ");
        scanf("%d", &niveauDeDifficulte);

        printf("\n");

        switch(niveauDeDifficulte)
        {
            case 1 : max = 100;break;
            case 2 : max = 1000;break;
            case 3 : max = 10000;break;
            default : printf("Niveau de difficulte erronee, veuillez choisir 1 ou 2 ou 3!\n");break;
        }

        if(niveauDeDifficulte==1 || niveauDeDifficulte == 2 || niveauDeDifficulte == 3)
        {
            // Génération du nombre aléatoire
            nombreMystere = (rand() % (max - min + 1)) + min;

            switch(modeDuJeu)
            {
                case 1 /*Mode 1 joueur*/:
                            do
                            {
                                //Compteur de coups
                                compteurDeCoups++;
                                // On demande le nombre
                                printf("Quel est le nombre ? ");
                                scanf("%d", &nombreEntre);

                                // On compare le nombre entré avec le nombre mystère

                                if (nombreMystere > nombreEntre)
                                    printf("C'est plus !\n\n");
                                else if (nombreMystere < nombreEntre)
                                    printf("C'est moins !\n\n");
                                else
                                    printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteurDeCoups);

                            } while (nombreEntre != nombreMystere);break;
                case 2 /*Mode 2 joueur*/:
                    do
                    {
                        //Compteur de coups
                        compteurDeCoups++;
                        // On demande le nombre
                        if(finDuJeu!=0)
                        {

                            printf("Joueur 1 : Quel est le nombre ? ");
                            scanf("%d", &nombreEntre);

                            // On compare le nombre entré avec le nombre mystère

                            if (nombreMystere > nombreEntre)
                                printf("C'est plus !\n\n");
                            else if (nombreMystere < nombreEntre)
                                printf("C'est moins !\n\n");
                            else
                            {
                                printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteurDeCoups);
                                finDuJeu = 0;
                            }
                        }
                        if(finDuJeu!=0)
                        {

                            printf("Joueur 2 : Quel est le nombre ? ");
                            scanf("%d", &nombreEntre);

                            // On compare le nombre entré avec le nombre mystère

                            if (nombreMystere > nombreEntre)
                                printf("C'est plus !\n\n");
                            else if (nombreMystere < nombreEntre)
                                printf("C'est moins !\n\n");
                            else
                            {
                                printf ("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n",compteurDeCoups);
                            }
                        }

                    } while (nombreEntre != nombreMystere);break;
                default : printf("Mode du joueur errone, veuillez choisir 1 ou 2!\n");
            }
        }

        printf("Voulez-vous faire une autre partie(tapez 1 pour Oui, tapez 0 pour Non)? ");
        scanf("%d", &continuerPartie);
    }

    printf("\t*****************GAME OVER*****************\n");

    return 0;
}


