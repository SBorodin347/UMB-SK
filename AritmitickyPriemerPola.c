/*Hladame aritmiticky priemer pola(float)*/

#include <math.h>
int main () {
    int n;
    printf("zadaj cislo n: ");
    scanf("%d", &n);
   
    float pole[n]; //definujeme len vtedy ked vieme pocet prvkov
 int i;
 for(i=0; i<n; i++) {
     printf("zadaj element pola: ");
     scanf("%f", &pole[i]);
 }
    //aritmiticky priemer
   float summa = 0.0;
    for(i=0; i<n; i++) {
        summa = summa + pole[i];
    }
    float priemer;
    priemer = summa/n;
    printf("priemer je %f\n", priemer);
  
    return 0;
}
