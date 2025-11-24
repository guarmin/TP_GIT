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
        printf("\n");
        NbEleve();
    }
    else
    {
        return nombre;
    }
}
void SaisiNote(int NbEleve, int n[][3])
{
    printf("saisie des notes pour %d eleves et 3 controles\n", NbEleve);
    for (int j = 1; j < NbEleve + 1; j++)
    {
        printf("Eleve %d:\n", j);
        for (int i = 1; i < 4; i++)
        {

            printf("    Note du controle %d (0 a 20) :", i);
            scanf("%d", &n[j - 1][i - 1]);
        }
    }
}
void affichernote(int note[][3], int NbEleve)
{
    printf("Tableau des notes\n");
    printf("Eleve C1 C2 C3\n");
    for (int i = 0; i < NbEleve; i++)
    {
        printf("    %d", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", note[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    affichage();
    LireChoix();
    int nbeleve = NbEleve();
    int note[nbeleve][3];
    SaisiNote(nbeleve, note);
    affichernote(note, nbeleve);
    return 0;
}