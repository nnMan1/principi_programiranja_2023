#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "my_ctype.h"
#include "my_str_lib.h"
#include <string.h>

int main()
{

    char tekst[50] = "Marko Markovic-068269483";

    printf("%s\n", strtok(tekst, " -"));
    printf("%s\n", strtok(NULL, " -"));
    printf("%s\n", strtok(NULL, " -"));
    printf("%s\n", tekst);

   /* char ime0[20] = "Andrija";
    char ime1[] = "rij";
    char ime2[20];

    printf("%s", my_strstr(ime0, ime1));
    //printf("%s", my_strchr(ime0, 'r'));

    /*my_strcpy(ime2, ime1);
    str_toupper(ime2);
    strcat(ime2, ime1);
    printf("%d", strcmp(ime0, ime2));*/

/*
    char str[] = "ABY";
    char *rem;
    //int str_val = atoi(str);
    int str_val = strtol(str, &rem, 16);
    printf("%d\n", str_val);
    printf("%s", rem);

/*
    char str[] = "314e-2g25";
    //double str_val = atof(str);
    char *rem;
    double str_val = strtod(str, &rem);
    printf("str_val = %lf\n", str_val);
    printf("rem = %s\n", rem);

/*
    char c;
    scanf("%c", &c);

    printf("%c\n", my_toupper(c));
/*
    char *str = malloc(sizeof(char) * 50);

    scanf("%s", str);

    printf("%s", str_toupper(str));
    free(str);*/

    return 0;
}
