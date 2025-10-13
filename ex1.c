#include <stdio.h>
 
int main(){
   
    /*Ex 1*/
    int sec = 0;
    printf("Donnez un nombre de secondes : ");
    scanf("%d", &sec);
    int heures = sec / 3600;
    int min = (sec - 3600 * heures)/60;
    int sec_reste = sec - 3600*heures - 60 * min;
 
    printf("%d secondes fait %d heures, %d minutes et %d secondes", sec,heures, min , sec_reste);
    return 0;
 
}