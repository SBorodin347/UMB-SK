/* Zadavame vlastne cisla do n-rozmerneho pola, dalej program nájde maximálnu deriváciu dvoch čísel v tomto poli */

int main(){
    //pocet prvkov
    int n;
    printf("zadaj n: ");
    scanf("%d", &n);
    //definicia pola a potrebnych premennych
    int a[n], i, max1, max2;
    
    //zadanie prkov do pola
    for (i=0; i<n; i++){
        printf("zadaj element: ");
        scanf("%d", &a[i]);
    }
    //nastavime indexy max prvkov na nuly, dalej skontrolujeme
    max1 = 0; max2 = 0;
    
    //hladame index prveho max elementa
    for (i=0; i<n; i++){
        if(a[i]>a[max1]){
            max1 = i;
        }
    }
    
    //hladame index druheho max elementa
    for (i=0; i<n; i++){
        if(a[i]>a[max2] && i!=max1){ //odstranime ten prvy max1 element
            max2 = i;
        }
    }
    
    //vynasobime a vypisime vysledok na obrazovku
    int p;
    p = a[max2]*a[max1];
    printf("proizvod: %d ", p);
    
    return 0;
}
