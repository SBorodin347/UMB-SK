/*Tento algoritmus urcuje ci je cislo prvocislom alebo nie*/

int main (){
    int cislo;
    printf("Zadajte cislo: ");
    scanf("%d", &cislo);
    int i = 2;
    while (cislo % i != 0 && i < cislo) {
        i++;
    }
    if (cislo % i == 0 && i < cislo)
        printf("Cislo %d nie je prvocislo.\n", cislo);
    else
        printf("Cislo %d je prvocislo.\n", cislo);
    
    return 0;
}
