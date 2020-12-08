/*Tento algoritmus vypočíta dĺžku telesovej uhlopriečky kocky, pričom dĺžka strany kocky je zadaná ako vstupná hodnota. Výsledok vypíše na obrazovku*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float a, d;
    printf("Zadaj dlzku strany kocky: ");
    scanf ("%f", &a);
    d = sqrt(3)*a;
    printf("Dlzka telesovej uhlopriecky kocky je %f.\n", d);
    
    return 0;
}
