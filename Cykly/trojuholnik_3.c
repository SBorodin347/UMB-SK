/*

 i               hviezdy(riadok-i+1)    ods(i-1)
 1 *****         5                      0
 2  ****         4                      1
 3   ***         3                      2
 4    **         2                      3
 5     *         1                      4
 
 */




int main(){
    int riadok, i, j;
    printf ("zadaj cislo riadkov: ");
    scanf("%d", &riadok);
    for (i = 1; i<=riadok; i++){ //pocet riadkov
        for(j = 0; j<i-1; j++){ //pocet odstupov
            putchar(' ');
        }
        for(j = 0; j<riadok-i+1; j++){ //pocet hviezd
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
