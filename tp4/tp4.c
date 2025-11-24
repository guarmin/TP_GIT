#include <stdio.h>

void affichage()
{
    printf("==== GESTION DE NOTES ====\n");
    printf("1. Saisir le nombre d'eleves\n");
    printf("2. Saisir les notes des eleves\n");
    printf("3. Affcicher toutes les notes \n");
    printf("4. Afficher la oyenne d'un eleve\n");
    printf("5. Afficher la moyenne generale\n");
    printf("6. Afficher le meilleure note de chaque controle\n");
    printf("0. Quitter\n");
}
int LireChoix()
{
    int choix;
    printf("Votre choix (entre 0 et 6 ):");
    scanf("%d", &choix);
    return choix;
}
int NbEleve()
{
    int nombre = 0;
    printf("Entrez le nombre d'eleves (1 a 30):");
    scanf("%d", &nombre);
    if (nombre < 1 || nombre > 30)
    {
        printf("Valeur Invalide");
        NbEleve();
    }
    else
    {
        return nombre;
    }
}
int main()
{
    affichage();
    LireChoix();
    NbEleve();
    return 0;
}