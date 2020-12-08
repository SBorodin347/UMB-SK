/*Tento algoritmus načíta celé kladné čísla m, n a maticu A[m][n] celých čísel. 
Program vytvorí maticu B, do ktorej prepíše maticu A tak, aby boli stĺpce v opačnom poradí. Výslednú maticu B vypíše na obrazovku.*/

int main(){
    int n, m;
    printf("zadaj cele cislo m: ");
    scanf("%d", &m);
    printf("zadaj cele cislo n: ");
    scanf("%d", &n);
    int A[m][n], i, j;
    int B[m][n];
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++){
            printf("Zadaj cele cislo: ");
            scanf("%d", &A[i][j]);
        }
    }
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++){
            B[i][n-j-1] = A[i][j];
        }
    }
    for (i=0; i<m; i++) {
        for (j=0; j<n; j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    return 0;
}
