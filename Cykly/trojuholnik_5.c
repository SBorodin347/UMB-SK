/*

              *    ods   riadok
    *         1    4     1
   ***        3    3     2
  *****       5    2     3
 *******      7    1     4
*********     9    0     5
 
 */




int main(){
    int riadok, i, j;
    printf ("zadaj cislo riadkov: ");
    scanf("%d", &riadok);
    for (i = 0; i<riadok; i++){ //pocet riadkov
        for(j = 0; j<riadok-i-1; j++){ //pocet odstupov
            putchar(' ');
        }
        for(j = 0; j<i*2+1; j++){ //pocet hviezd
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
