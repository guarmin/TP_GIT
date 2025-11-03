#include <stdio.h>

int main() {
    char nom[50];
    printf("Nom ? ");
    scanf("%49s", nom); 
    printf("Bonjour %s\n", nom);
    return 0;
}
/* l'erreur etait du au tableau trop petit pour stocker le nom donc on l'agrandi a 50 et on limite a 49 caractere avec %49s */