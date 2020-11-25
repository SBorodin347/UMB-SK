/*Hladame minimalny prvok v poli a jeho index*/

int main () {
    
    //pocet prvkov v poli
    int n;
    printf("zadaj pocet elementov n: ");
    scanf("%d", &n);
    int pole[n];
    //zadavame prvky pola
    int i;
    for(i=0; i<n; i++) {
        printf("zadaj element pola: ");
        scanf("%d", &pole[i]);
    }
    //hladame minimalny prvok v poli a jeho index
    int minimum, indexmin;
    //priradime hodnotu prveho elementa k premenej MINIMUM
    minimum = pole[0];
    indexmin = 0;
    
    //kontrolujeme vsetky ostatne prvky
    //ak sa zisti, ze jeden z ostatnych prvkov menej, ako ten predosly v premenej MINIMUM, tak teda ten prvok sa stane novym MINIMUM
    //napriklad prvy element je 5[0], druhy element je 2[1], po kontrole IF druhy element bude novym minimalnym
    for (i=1; i<n; i++){
        if(pole[i] < pole[indexmin]){
            minimum = pole[i];  //ak podmnienka hore najde novy minimalny, tak ona priradi tento prvok do premenej MINIMUM
            indexmin = i; //tu zoberie index tohto prvku, aby sme urcili poradie daneho elementa
        }
    }
    printf("minalny element %d s indexom %d\n", minimum, indexmin);
    return 0;
}
