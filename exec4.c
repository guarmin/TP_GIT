#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
/* le programme etait infini donc le i++ permet d'eviter cela  */
