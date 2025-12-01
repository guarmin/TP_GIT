#ifndef tp5
#define tp5

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <locale.h>

void menu();
int choix();
void initialiser(int tableau[]);
int ajouterConsommation(int tableau[]);
void afficheResume(int tableau[]);
void charger(char nom[], int tableau[]);
void sauvegarder(char nom[], int tableau[]);

#endif