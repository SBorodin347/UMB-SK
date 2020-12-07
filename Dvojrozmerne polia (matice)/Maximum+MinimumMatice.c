/*Tento algoritmus nájde maximálny a minimálny prvok v matici*/

int main(){
    int m,n;
    printf("zadaj pocet riadkov: ");
    scanf("%d", &n);
    printf("zadaj pocet stlpcov: ");
    scanf("%d", &m);
    int matica[n][m], i, j;
    
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            printf("zadaj element matice: ");
            scanf("%d", &matica[i][j]);
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            printf("%d ", matica[i][j]);
        }
        printf("\n");
    }
    
    int min, max;
    min = matica[0][0];
    max = matica[0][0];
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            if (matica[i][j]<min) {
                min=matica[i][j];
            }
        }
    }
    
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            if (matica[i][j]>max) {
                max=matica[i][j];
            }
        }
    }
    printf("najmensi element matice je: %d\n", min);
    printf("najvacsi element matice je: %d\n", max);
    return 0;
}
