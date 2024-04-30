#include <stdio.h>
#include <stdlib.h>
#include "client_lib.h"

clientData read_client_from_txt_file(FILE * f) {
    clientData r;
    printf("Enter acctNum: ");
    fscanf(f,"%d", &r.acctNum);

    printf("Enter first name: ");
    fscanf(f, "%s", r.firstName);

    printf("Enter last name: ");
    fscanf(f, "%s", r.lastName);

    printf("Enter balance: ");
    fscanf(f, "%lf", &r.balance);

    return r;
}

void add_client_to_database(clientData c, FILE *f) {

    int n = 1;

    fseek(f, 0, SEEK_SET);
    clientData tmp;

    while(n != c.acctNum) {
        fread(&tmp, sizeof(clientData), 1, f);
        if(feof(f))
            break;

        n++;
    }

    clientData emptyClient = {0, "", "", 0};
    while(n != c.acctNum) {
        fwrite(&emptyClient, sizeof(clientData), 1, f);
        n++;
    }

    fseek(f, -sizeof(clientData), SEEK_SET);

    fwrite(&c, sizeof(clientData), 1, f);
}

void print_client_to_txt(clientData c, FILE *f) {
    fprintf(f, "%5d %20s %20s %15lf\n", c.acctNum, c.firstName, c.lastName, c.balance);
}

void print_all_clients_to_txt(FILE *f, FILE *db) {
    fprintf(f, "%5s %20s %20s %15s\n", "ID", "First name", "Last name", "Balance");

    fseek(db, 0, SEEK_SET); //pomjeri pokazivac pozicije u fajlu na pocetak

    clientData c;
    fread(&c, sizeof(clientData), 1, db);

    while(!feof(db)) {
        //if(c.acctNum != 0)
            print_client_to_txt(c, f);

        fread(&c, sizeof(clientData), 1, db);
    }
}

void delete_client(clientData c, FILE *db) {

    if(c.acctNum == 0)
        return;

    clientData emptyClient = {0, "", "", 0};

    fseek(db, sizeof(clientData) * (c.acctNum-1), SEEK_SET);
    fwrite(&emptyClient, sizeof(clientData), 1, db);
}

clientData get_client_by_id(int id, FILE * db) {

    fseek(db, 0, SEEK_END); //odemo na kraj fajla da bi odredili duzinu
    int len = ftell(db) / sizeof(clientData); //vraca koliko smo mjesta pomjereni u odnosu na pocetak fajla (posto smo na kraju fajla to je duzina fajla)

    if(id == 0 || id > len) {
        clientData c = {0, "", "", 0};
        return c;
    }

    clientData c;

    fseek(db, sizeof(clientData) * (id-1), SEEK_SET);
    fread(&c, sizeof(clientData), 1, db);

    return c;
}


