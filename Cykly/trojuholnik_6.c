/*
              *    ods   i     riadok

*********     9    0     0     5
 *******      7    1     1
  *****       5    2     2
   ***        3    3     3
    *         1    4     4
 
 ods = i
 
 */


int main (){
    int riadok, i, j;
    printf("zadaj cislo riadkov: ");
    scanf("%d", &riadok);
    
    for (i=0; i<riadok; i++){
        for (j = 0; j<i; j++) {
            putchar(' ');
        }
        for (j = 0; j<riadok*2-(i*2)-1; j++) {
            putchar('*');
        }
        putchar('\n');
    }
    
    
    return 0;
}
