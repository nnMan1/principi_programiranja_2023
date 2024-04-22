#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct clientData clientData;

struct clientData {
    int acctNum;
    char firstName[20];
    char lastName[20];
    double balance;
};

void print_clients(FILE *f, FILE *to) {
    fseek(f, 0, SEEK_SET);
    clientData c;
    fread(&c, sizeof(c), 1, f);

    while(!feof(f)) {
        fprintf(to, "%d %s %s %lf\n", c.acctNum, c.firstName, c.lastName, c.balance);
        fread(&c, sizeof(c), 1, f);
    }
}

void addClient(int id, char *firstName, char *lastName, double balance, FILE * f) {
    fseek(f, 0, SEEK_END);

    clientData client;
    client.acctNum = id;
    strcpy(client.firstName, firstName);
    strcpy(client.lastName, lastName);
    client.balance = balance;

    fwrite(&client, sizeof(client), 1, f);
}

int main()
{
    FILE * bank = fopen("bank_data.dat", "r+");

    if(bank == NULL) {
        fprintf(stderr, "Neuspjesno otvaranje fajla");
        exit(1);
    }

    clientData c = {1, "Marko", "Markovic", 500};

    while(1) {
        printf("Enter command: \n %s \n %s \n",
                "1 - add client",
                "2 - print clients");

        int c;
        scanf("%d", &c);

        switch(c) {
            case 1:
                int id;
                char firstName[50];
                char lastName[50];
                double balance;

                printf("Enter id: ");
                scanf("%d", &id);
                printf("Enter first name: ");
                scanf("%s", firstName);
                printf("Enter last name: ");
                scanf("%s", lastName);
                printf("Enter balance: ");
                scanf("%lf", &balance);
                addClient(id, firstName, lastName, balance, bank);
                break;
            case 2:
                print_clients(bank, stdout);
        }
    }
    fwrite(&c, sizeof(clientData), 1, bank);

    fclose(bank);

    return 0;
}
