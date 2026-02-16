#include <stdio.h>
#include <stdlib.h>

/* donné neccessaire des joueurs */
char nomJoueur[15];
int ageJoueur[2];
int scoreJoueur[2];

/* donnée neccesaire pour creer les matchs */

int numeroMatch = 0;
int joueur1 = 0;
int joueur2 = 0;
int win = 0;

char inscription(nomJoueur, ageJoueur, scoreJoueur, numeroMatch, joueur1, joueur2, win) /* fonction qui prend en compte les differentes donnees*/
{

    for (int i = 0; i <= 7; i++) /* inscrption du nom du joueur*/
    {
        char tableauJoueur[i][nomJoueur];
        for (int j = 1; j <= 8; j++)
        {
            printf(" Veuillez entrez le nom du joueur %d: ", j);
            scanf("%c", &nomJoueur);
        }
    }
    for (int i = 0; i <= 7; i++) /* inscription de l'age du joueur*/
    {
        int tableauAge[i][ageJoueur];
        for (int j = 1; j <= 8; j++)
        {
            printf(" Veuillez entrez l'age du joueur %d: ", j);
            scanf("%c", &ageJoueur);
        }
    }
}
char Affichage(nomJoueur, ageJoueur, scoreJoueur, numeroMatch, joueur1, joueur2, win) /* fonction qui prend en compte les differentes donnees*/
{
    /* affiche le tableau des joueurs + le tableau des numero de ce qui participe au tour + nb joueur engagé au tour */
}
char score(nomJoueur, ageJoueur, scoreJoueur, numeroMatch, joueur1, joueur2, win) /* fonction qui prend en compte les differentes donnees*/
{

    printf("Indiqué le score du joueur 1:");
    scanf("%d", joueur1);
    printf("Indiqué le score du joueur 2:");
    scanf("%d", joueur2);
    if (joueur1 > joueur2)
    {
        printf(" Bravo au joueur 1 , tu as gagne !");
        /*retourne la valeur 1 pour win car c'est le joueur 1 qui a gagné */
    }
    else if (joueur1 < joueur2)
    {
        printf("Feliciation au joueur 2 , tu es le vainqueur !");
        /*retourne la valeur 2  pour win car c'est le joueur 2 qui a gagné */
    }
    else
    {
        printf("Bien joué c'est une égalité !");
        /* retourne 0 pour win car personne n'a gagné */
    }
}

int main()
{
    inscription();
    Affichage(inscription);
}