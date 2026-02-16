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
int main()
{
    inscription();
}