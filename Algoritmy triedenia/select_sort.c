/*Tento algoritmus triedi prvky v poli metodom select_sort*/

int main(){
    int a[10] = {2,5,1,7,8,9,4,3,6,0};
    int i,j; //premene k triedeniu
    int x; //premene pre vypis
    //select sort
    int imin;
    int pom;
    for(i=0; i<10; i++){
        imin = i;
        for (j=i+1; j<10; j++){
            if (a[imin]>a[j]){
                imin = j;
            }
            //algoritmus vymeny hodnot dvoch premenych
            pom = a[i];
            a[i] = a[imin];
            a[imin] = pom;
        }
    }
    //vypis pola
    for (x = 0; x<10; x++){
        printf("%d, ", a[x]);
    }
    
    return 0;
}
