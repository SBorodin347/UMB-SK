 /*
 
 i         
 1 *       
 2 **      
 3 ***     
 4 ****    
 5 *****   
 
 */




int main(){
    int riadok, i, j;
    printf ("zadaj cislo riadkov: ");
    scanf("%d", &riadok);
    for (i = 1; i<=riadok; i++){ //pocet riadkov
        for(j = 0; j<i; j++){ //pocet hviezd
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}
