#include <stdio.h>
#include <stdlib.h>
///stampati naziv mjeseca u zavisnosti od rednog broja
int main()
{
    int n;
    scanf("%d", &n);
    /*
    char c;
    scanf("%c", &c); //ucitava jedan karakter
    c = getchar();
    c = getc(stdin);
    */

    switch(n) {
    case 1:
        printf("Januar");
        break;
    case 2:
        printf("Februar");
        break;
    case 3:
        printf("Mart");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("Maj");
        break;
    case 6:
        printf("Jun");
        break;
    case 7:
        printf("Jul");
        break;
    case 8:
        printf("Avgust");
        break;
    case 9:
        printf("Septembar");
        break;
    case 10:
        printf("Oktobar");
        break;
    case 11:
        printf("Novembar");
        break;
    case 12:
        printf("Decembar");
        break;
    default:
        printf("Pogresna vrijednost za mjesec");
    }
    return 0;
}
