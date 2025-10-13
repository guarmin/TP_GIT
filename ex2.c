#include <stdio.h>
#include <math.h>
 
int main() {
    double c = 0.0;
    double t = 0.0;
    int n = 0;
 
    printf("Rentrez le montant de votre pret : ");
    scanf("%lf", &c);
 
    printf("Quel est votre taux d'interet annuel ( en pourcentage, ex: 5 pour 5%%) : ");
    scanf("%lf", &t);
 
    printf("Quelle est la duree du pret (en annees) : ");
    scanf("%d", &n);
 
    // conversion du taux d'interet en décimal
    t = t / 100;
 
    double tauxMensuel = t / 12;
    double M = (c * tauxMensuel) / (1 - pow(1 + tauxMensuel, -n * 12));
 
    printf("Votre mensualite est : %.2f\n", M);
 
    return 0;
}