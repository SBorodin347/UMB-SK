/*Vypis prvkov pola v opacnom poradi*/


int main(){
    //pocet prvkov v poli
    int n;
    printf("zadaj n: ");
    scanf("%d", &n);
    int pole[n];
    //zadavame prvky pola
    int i;
    for (i = 0; i<n; i++){
        printf("zadaj element masiva: ");
        scanf("%d", &pole[i]);
    }
    //vypis prvkov pola v opacnom poradi
    //n-1 = posledny element pola, preto zaciname od n-1 
    for (i = n-1; i>=0; i--){
        printf("%d ", pole[i]);
    }
    putchar('\n');
    
    return 0;
}
