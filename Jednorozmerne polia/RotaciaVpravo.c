/* Tento algoritmus načíta celé kladné číslo n a r, pričom n predstavuje počet prvkov poľa. 
Následne načíta n celočíselných prvkov poľa a tieto prvky v poli rotuje o r pozícií vpravo.
   
   Priklad pre r = 2
   1 2 3 4 5
   4 5 1 2 3
*/

int main () {
    int n;
    printf("zadaj cislo n: ");
    scanf("%d", &n);
    int a[n];
    int i, j, r, pom;
    for (i=0; i<n; i++) {
        printf("zadaj element pola: ");
        scanf("%d", &a[i]);
    }
    printf("zadaj r: ");
    scanf("%d", &r); //zadavame pocet pozici rotacii
    
    

    for (i = 0; i < r; i++) {
        pom = a[n-1];
        for (j = n-1; j > 0; j--) {
            a[j] = a[j-1];
        }
            a[0] = pom;
    }
    
    //vypis pola
    printf("<-----------\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
