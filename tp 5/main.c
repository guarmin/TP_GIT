#include "tp5.h"
#include <stdio.h>

int main()
{
    int Choix = 0;
    int tableau[7];
    while (Choix != 3)
    {
        menu();
        Choix = choix();
    }
}