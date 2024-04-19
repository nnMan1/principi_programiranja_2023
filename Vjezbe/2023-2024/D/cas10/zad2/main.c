#include <stdio.h>
#include <stdlib.h>

void print_file_content(FILE * f) {
    rewind(f);
    char c;
    c = fgetc(f);

    while(!feof(f)) {
        printf("%c", c);
        c = fgetc(f);
    }
}

void print_file_content1(FILE * f) {
    char line[100];
    fgets(line, 100, f);

    while(!feof(f)) {
        printf("%s", line);
        fgets(line, 100, f);
    }

}

void print_file_content2(FILE * f) {
    char rijec[50];
    fscanf(f, "%s", rijec);

    while(!feof(f)) {
        fprintf(stdout, "%s ", rijec);
        //printf("%s ", rijec)
        fscanf(f, "%s", rijec);
    }
}

void add_student_to_file(FILE *f, char *ime, char *prezime, int br_ind, int god_up, char smjer) {
    fprintf(f, "%s %s %d/%d ", ime, prezime, br_ind, god_up);
    fputc(smjer, f);
    fputc('\n', f);
}

int main()
{
    FILE *studenti = fopen("studenti.txt", "r");

    if(studenti == NULL) {
        printf("Greska pri otvaranju fajla");
        exit(1);
    }

    char tmp[50];
    fgets(tmp, 50, studenti);

    print_file_content(studenti);
    print_file_content(studenti);

    //fputc('A', stdout);
    //add_student_to_file(studenti, "Andrej", "Mijanovic", 5, 20, 'D');
    //fputs("Marko Markovic 5/24 D", studenti);
    fclose(studenti);
    return 0;
}
