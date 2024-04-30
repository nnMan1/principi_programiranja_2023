#ifndef CLIENTLIB_H
#define CLIENTLIB_H

typedef struct clientData clientData;

struct clientData {
    int acctNum;
    char firstName[20];
    char lastName[20];
    double balance;
};

clientData read_client_from_txt_file(FILE * f);

void add_client_to_database(clientData c, FILE *f);

void print_client_to_txt(clientData c, FILE *f);

void print_all_clients_to_txt(FILE *f, FILE *db);

void delete_client(clientData c, FILE *db);

clientData get_client_by_id(int id, FILE * db);

#endif //CLIENTLIB_H
