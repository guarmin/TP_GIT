#include "tp5.h"
#include <stdio.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");
    int Choix = 0;
    int tableau[7];
    while (Choix != 3)
    {
        menu();
        Choix = choix();
        if (Choix == 1)
        {
            ajouterConsommation(tableau);
        }
    }
}