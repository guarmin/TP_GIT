#ifndef tp5
#define tp5

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

void menu();
int choix();
void initialiser(int tab[]);
int ajouterConsommation(int tab[]);
void afficheResume(int tab[]);
void charger(char nom[], int tab[]);
void sauvegarder(char nom[], int tab[]);

#endif