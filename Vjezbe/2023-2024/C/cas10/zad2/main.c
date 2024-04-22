#include <stdio.h>
#include <stdlib.h>

void print_content(FILE *f) {
    rewind(f);
    char linija[50];
    fgets(linija, 50, f);

    while(!feof(f)) {
        printf("%s", linija);
        fgets(linija, 50, f);
    }
}

void make_copy(FILE *src, FILE *dest) {
    rewind(src);

    char linija[50];
    fgets(linija, 50, src);

    while(!feof(src)) {
        fputs(linija, dest);
        fgets(linija, 50, src);
    }
}

int main()
{
    FILE *f_src = fopen("data.txt", "r+");
    FILE *f_dest = fopen("data_copy.txt", "w");

    if(f_src == NULL || f_dest == NULL) {
        fprintf(stderr, "Greska u otvaranju fajla");
        exit(1);
    }

    fprintf(f_src, "1. Ana Jeknic 7/59");

    //make_copy(f_src, f_dest);

    fgetc(f_src);
    print_content(f_src);

    /*char c = fgetc(f);
    printf("%c", c);*/

    /*char linija[50];
    fgets(linija, 50, f);
    puts(linija); //ekv. fputs(linija, stdout);
    */
    /*
    char rijec[50];
    fscanf(f, "%s", rijec);
    printf("%s", rijec);*/

    fclose(f_src);
    fclose(f_dest);


    return 0;
}
