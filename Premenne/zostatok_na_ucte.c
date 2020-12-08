/*Tento algoritmus  vypočíta výsledný zostatok na účte po pripísaní ročného úroku. 
Základný vklad, výška ročnej úrokovej sadzby sú zadané ako vstupné údaje. Výsledok vypíše na obrazovku*/

int main() {
    float a, b, c;
    printf("Zadaj zakladny vklad: ");
    scanf ("%f", &a);
    printf("Zadaj vysku rocnej urokovej sadzby: ");
    scanf ("%f", &b);
    
    c =  a* (1+365*b/(100*365));
    printf("Vysledny zostatok na ucte je %f.\n", c);
    
    return 0;
}
