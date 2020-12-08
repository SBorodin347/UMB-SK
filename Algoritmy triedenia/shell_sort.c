/*Tento algoritmus triedi prvky v poli metodom shell_sort*/

//SHELL SORT
int main() {
    int a[10] = {2,5,1,7,8,9,4,3,6,0};
    int k;
    int i, j;
    int pom;
    int x;
    for (i = 10/2; i>0; i=i/2){
        for (j = i; j<10; j++){
            for(k = j - i; k >= 0; k = k - i){
                if (a[k+i] >= a[k])
                break;
                else {
                pom = a[k];
                a[k] = a[k+i];
                a[k+i] = pom;
            }
        }
    }
}
    //vypis pola
    for (x = 0; x<10; x++){
        printf("%d, ", a[x]);
    }
    return 0;
}
