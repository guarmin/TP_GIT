#include "tp5.h"
#include <stdio.h>

void menu()
{
    printf("==============================\n");
    printf("     Suivi de consomation     \n");
    printf("==============================\n");
    printf("1. Ajouter une consomation    \n");
    printf("2. Affichage le resume du jour\n");
    printf("3. Sauvegarder et quitter     \n");
}
int choix()
{
    int choix;
    printf("Votre choix : \n");
    scanf("%d", &choix);
    return choix;
}
void initialiser(int tableau[])
{
    for (int i = 0; i < 7; i++)
    {
        tableau[i] = 0;
    }
}
int ajouterConsommation(int tableau[])
{
    int choix = 0;
    int quantite = 0;
    printf("Quelle categorie voulez vous modifier\n");
    printf("\n");
    printf("1. Eau 💧\n");
    printf("2. Cafe ☕\n");
    printf("3. Bonbons 🍬\n");
    printf("4. Gateau 🍰\n");
    printf("5. Legumes 🥦\n");
    printf("6. Fruits 🍎\n");
    printf("7. Proteines 🍗\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    printf("Combien d unites ajouter ? \n");
    scanf("%d", &quantite);
    tableau[choix - 1] = tableau[choix - 1] + quantite;
    printf("Consommation mise a jour\n");
}