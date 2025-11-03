#include <stdio.h>

int main() {
    int distance_km = 100;
    int vitesse_kmh = 50;
    float temps = distance_km / vitesse_kmh; 
    int minutes = temps * 60;
    printf("minutes = %d\n", minutes); 
    return 0;
}
/* le probleme etait que le temps etait en int donc la division donnait un resultat entier il fallait le passer en float pour avoir un resultat decimal ensuite pour les minutes il fallait le repasser en int */