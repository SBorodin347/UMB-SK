/* Tento algoritmus načíta celé kladné číslo n a r, pričom n predstavuje počet prvkov poľa. 
Následne načíta n celočíselných prvkov poľa a tieto prvky v poli rotuje o r pozícií vľavo.
   
   Priklad pre r = 2
   1 2 3 4 5
   3 4 5 1 2

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
        pom = a[0];
        for (j = 1; j <= n; j++) {
            a[j-1] = a[j];
        }
            a[n-1] = pom;
    }
    
    //vypis pola
    printf("<-----------\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
