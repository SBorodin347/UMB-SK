/*Tento algoritmus triedi prvky v poli metodom bubble_sort*/

int main(){
    
        int a[10] = {2,5,1,7,8,9,4,3,6,0};
        int i,j; //premene k triedeniu
        int x; //premene pre vypis
        //bubble sort
        int pom;
        for(i=0; i<10; i++){
            for (j=10-1; j>=i; j--){
                if (a[j-1]>a[j]){
                    pom = a[j];
                    a[j] = a [j-1];
                    a[j-1] = pom;
                    
                }
                //tu sa da pozriet ako funguje algoritmus
                for (x = 0; x<10; x++)
                    printf("%d, ", a[x]);
                    putchar('\n');
            }
        }
        //vypis pola
        for (x = 0; x<10; x++){
            printf("%d, ", a[x]);
  
        }
        
        return 0;
    }
