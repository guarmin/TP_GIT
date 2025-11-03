#include <stdio.h>

int main() {
    char s[5];
    s[0] = 'H';
    s[1] = 'e';
    s[2] = 'y';
    s[3] = '!';
    s[4] = '\0';
    char a = 'b';
    printf("%s\n", s); 
    return 0;
}
/* en rajoutant la ligne 9 et 10 cela corrige l'erreur et il nous dit la bonne chose */