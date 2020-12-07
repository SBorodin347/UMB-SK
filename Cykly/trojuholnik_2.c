/*

 i         riadok    ods(riadok-i)
 1     *        1    4
 2    **        2    3
 3   ***        3    2
 4  ****        4    1
 5 *****        5    0
 
 */




int main(){
    int riadok, i, j;
    printf ("zadaj cislo riadkov: ");
    scanf("%d", &riadok);
    for (i = 1; i<=riadok; i++){ //pocet riadkov
        for(j = 0; j<riadok-i; j++){ //pocet odstupov
            putchar(' ');
        }
        for(j = 0; j<i; j++){ //pocet hviezd
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
