#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *my_file = fopen("data.txt", "w");

    if(my_file == NULL) {
        fprintf(stderr, "Greska u otvaranju fajla");
        exit(1);
    }

    //fputc('A', my_file);
    //fputs("Principi programiranja", my_file);
    //fprintf(my_file, "Marko Markovic %d/%d", 5, 20);

    //fputc('A', stdout);
    //fputs("Principi programiranja", stdout);
    return 0;
}
