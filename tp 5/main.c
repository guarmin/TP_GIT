#include "tp5.h"
#include <stdio.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    int Choix = 0;
    int tableau[7] = {0};
    if (charger("consommation.txt", tableau))
    {
        printf(" Donnees chargees avec succes\n");
    }
    else
    {
        printf(" Nouveau fichier créé\n");
        initialiser(tableau);
    }

    while (Choix != 3)
    {
        menu();
        Choix = choix();
        if (Choix == 1)
        {
            ajouterConsommation(tableau);
        }
        if (Choix == 2)
        {
            afficheResume(tableau);
        }
    }
    if (sauvegarder("consommation.txt", tableau))
    {
        printf("Donnees sauvegardees avec succes\n");
    }
    else
    {
        printf("Erreur lors de la sauvegarde\n");
    }

    return 0;
}