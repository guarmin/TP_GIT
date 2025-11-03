#include <stdio.h>

int main() {
    int a = 2;
    int b = 0;
    if (b != 0) {
        int c = a / b;
        printf("%d\n", c);
    } else {
        printf("erreur : division par zero impossible\n");
    }
    return 0;
}
/* le probleme est du a la division par 0 impossible donc l'ajout de if else resout cela */