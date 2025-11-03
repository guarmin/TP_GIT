#include <stdio.h>

int main() {
    int t[3] = {10, 20, 30};
    int i = sizeof(t) / sizeof(t[0])-1;
    printf("%d\n", t[i]); 
    return 0;
}
/*i avait une valeur négative, ce qui ne convient pas car les indexes du tableau commencent à 0. Il faut donc le remplacer par la longueur du tableau*/