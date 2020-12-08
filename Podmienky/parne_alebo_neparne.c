/*Tento algoritmus určuje, či je číslo parne alebo neparne*/


int main ()  {
int a;
    do {
        printf("zadaj cele kladne cislo: ");
        scanf("%d", &a);
    } while (a < 0); //osetrime vstup
    
    //parne
    if(a % 2 == 0 && a > 0) {
    printf("Cislo %d je parne.\n", a);
    }
    //neparne
    if (a % 2 != 0 && a > 0) {
        printf("cislo %d je neparne.\n", a);
    }
    return 0;
    }
