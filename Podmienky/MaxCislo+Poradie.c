/*Tento algoritmus načíta n celých čísel a zistí hodnotu a poradové číslo najväčšieho zadaného čísla. Výsledok (najväčšie číslo a jeho poradové číslo) vypíše na obrazovku*/


int main (){
    int n;
    printf("zadaj pocet cisel: ");
    scanf("%d", &n);   //urcujeme pocet cisel
    
    int cislo, max, poradie, i;
    
    for (i=0; i<n; i++){
        printf("zadaj cislo: ");
        scanf("%d", &cislo);  //zadavame cisla
        if (i == 0) {
            max = cislo;
            poradie = cislo; //priradime hodnotu prveho zadaneho cisla k MAX a PORADIE
        }  else {  //aj tiez
            if(cislo > max){  //ak sa najde cislo vacsie ako MAX, tak teda ono sa stane novym MAX, a poradie urcime ako sucet i+1 (kedze zaciname od nuly)
                max=cislo; poradie = i+1;
            }
    }
    }
    
    printf("Maximum je %d na poradi %d\n",max, poradie);
    return 0;
}
