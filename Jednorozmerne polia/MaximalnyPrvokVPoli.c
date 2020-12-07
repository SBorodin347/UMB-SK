/*Hladame maximalny prvok v poli a jeho index*/

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
    //hladame maximalny prvok v poli a jeho index
    int maximum, indexmax;
    //priradime hodnotu prveho elementa do premenej MAXIMUM
    maximum = pole[0];
    indexmax = 0;
    
    //kontrolujeme vsetky ostatne prvky
    //ak sa zisti, ze jeden z ostatnych prvkov vacsi, ako ten predosly v premenej MAXIMUM, tak teda ten prvok sa stane novym MAXIMUM
    //napriklad prvy element je 2[0], druhy element je 5[1], po kontrole IF druhy element bude novym maximalnym
    for (i=1; i<n; i++){
        if(pole[i] > pole[indexmax]){
            maximum = pole[i];  //ak podmnienka hore najde novy maximalny, tak ona priradi tento prvok do premenej MAXIMUM
            indexmax = i; //tu zoberie index tohto prvku, aby sme urcili poradie daneho elementa
        }
    }
    printf("minimalny element je %d s indexom %d\n", maximum, indexmax);
    return 0;
}
