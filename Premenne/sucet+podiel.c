/*Tento algoritmus načíta dve reálne čísla, vypočíta najprv ich súčet a potom podiel. Výsledky vypíše na obrazovku bez použitia tretej premennej*/

int main() {
    float x, y;
    printf("Zadaj realne cislo: ");
    scanf ("%f", &x);
    printf("Zadaj realne cislo: ");
    scanf ("%f", &y);
    x = x+y;
    y=(x-y)/y;
    printf("sucet je: %.2f \t podiel je: %.2f.\n", x, y);
    return 0;
}
