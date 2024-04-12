#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char rijec[20];
    char c;
    scanf("%s %c", rijec, &c);
    printf("%s", strchr(rijec, c));
/*    char ime[20] = "Marko";
    char prezime[] = "Jovovic";

    strcat(ime, prezime);
    printf("%s", strcat(ime, prezime));
/*
    char ime[] = "Marko";
    char ime_copy[15];
    strncpy(ime_copy, ime, 3);
    printf("%s", ime_copy);

    /*int x = 5, y = 6;
    char str[15];
    sprintf(str, "%d/%d", x, y);
    printf("%s", str);
    /*
    //"5/24"
    char num[45] = "Marko Markovic 1/25";

    char ime[15], prezime[15];
    int br;

    sscanf(num, "%s %s %d", ime, prezime, &br);
    printf("%s %s %d", ime, prezime, br);
    */


    /*gets(num);
    printf("%s", num);*/
    //scanf("%s", num);
    /*char *rem;

    printf("%d", strtol(num, &rem, 16));*/
    /*double pi = atof(num);
    printf("%lf", pi);*/
/*
    char *rem;
    double br = strtod(num, &rem);
    int god = strtol(rem+1, &rem, 10);

    printf("%lf %d %s",br, god, rem);

    /*
    char c = 'z';
    scanf("%c", &c);

    printf("isdigit(%c) = %d", c, isdigit(c));
    */
    /*

    char *s = malloc(sizeof(char) * 50);
    scanf("%s", s);

    for(int i=0; i<strlen(s); i++)
        s[i] = toupper(s[i]);

    printf("%s", s);*/

    return 0;
}
