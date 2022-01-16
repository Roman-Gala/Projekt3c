#include <stdio.h>
#include <stdlib.h>
#include "funkcje.h"

int main(int argc, char *argv[])
{
    int w, k;
    printf("Ile wierszy: ");
    scanf("%d", &w);
    printf("Ile kolumn: ");
    scanf("%d", &k);
    int tab[w][k];
    czytaj_kolumnami(w, k, tab);
    printf("\nTablica:\n\n");
    pisz_wierszami(w, k, tab);
    int wielk_wynik;
    if (w%2!=0)
        if (k%2!=0)
            wielk_wynik = (w+1)*(k+1)/4;
        else
            wielk_wynik = (w+1)*k/4;
    else
        wielk_wynik = w*k/4;
    int wynik[wielk_wynik];
    int *c;
    c = wektor_parzysty(w, k, tab);
    printf("\nWektor wynik: [ ");
    for (int i = 0; i < wielk_wynik; i++)
    {
        wynik[i] = *(c + i);
        printf("%d ", wynik[i]);
    }
    printf("]\n\n");
    

    return 0;
}
