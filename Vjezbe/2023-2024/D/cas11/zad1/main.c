#include <stdio.h>
#include <stdlib.h>

typedef struct clientData clientData;

struct clientData{
    int acctNum;
    char firstName[20];
    char lastName[20];
    double balance;
};

clientData findClientByAcctNum(int acctNum, FILE *f);

clientData createEmptyClient() {
    clientData c;

    c.acctNum = 0;
    strcpy(c.firstName, "");
    strcpy(c.lastName, "");
    c.balance = 0;

    return c;
}

void printClientTxt(clientData c, FILE *f_out) {
    fprintf(f_out, "%d %s %s %lf\n", c.acctNum, c.firstName, c.lastName, c.balance);
}

clientData readClientTxt(FILE *f) {
    //cita jednog klijenta iz fajla f u tekstualnom formatu
    clientData c;
    printf("Acct. Num: ");
    fscanf(f, "%d", &c.acctNum);

    printf("First name: ");
    fscanf(f, "%s", &c.firstName);

    printf("Last name: ");
    fscanf(f, "%s", &c.lastName);

    printf("Balance: ");
    fscanf(f, "%lf", &c.balance);
    return c;
}

void add_client(clientData *client, FILE *f) {
    //ako postoji klijent sa acctNum kao sto je acctNum za client
    //azuriraj podatke za tog klijenta
    //inace dodaj novog klijenta na kraj fajla

    clientData c = findClientByAcctNum(client->acctNum, f);
    if(c.acctNum == client->acctNum)
        fseek(f, -sizeof(clientData), SEEK_CUR);
    else
        fseek(f, 0, SEEK_END); //podjemo na kraj fajla

    fwrite(client, sizeof(clientData), 1, f); //upisemo klijenta
    printf("Client data saved\n");
}

void printClientsTxt(FILE *f, FILE *f_out) {
    fseek(f, 0, SEEK_SET); //odemo na pocetak fajla sa kijentima

    clientData c;
    fread(&c, sizeof(c), 1, f);
    while(!feof(f)) {
        if(c.acctNum != 0)
            printClientTxt(c, f_out);
        fread(&c, sizeof(c), 1, f);
    }
}

clientData findClientByAcctNum(int acctNum, FILE *f) {
    fseek(f, 0, SEEK_SET);

    clientData c;
    fread(&c, sizeof(c), 1, f);
    while(!feof(f)) {
        if(c.acctNum == acctNum)
            return c;

        fread(&c, sizeof(c), 1, f);
    }

    return createEmptyClient();
}

void deleteClient(int acctNum, FILE * f) {
    clientData c = findClientByAcctNum(acctNum, f);
    if(c.acctNum == acctNum) {
        fseek(f, -sizeof(clientData), SEEK_CUR);
        clientData c = createEmptyClient();
        fwrite(&c, sizeof(clientData), 1, f);
    }

}

int main()
{
    FILE *f = fopen("data.dat", "rb+");

    while(1) {
        printf("Enter command: \n %s %s %s %s %s %s",
                "1 - to add client\n",
                "2 - print clients\n",
                "3 - find client by id\n",
                "4 - change balance\n",
                "5 - delete client\n",
                "0 - exit\n");

        int command;
        scanf("%d", &command);

        if(command == 0)
            break;

        clientData c;
        int acctNum;

        switch(command) {
            case 1:
                c = readClientTxt(stdin);
                add_client(&c, f);
                break;

            case 2:
                printClientsTxt(f, stdout);
                break;

            case 3:
                printf("Enter acctNum:");
                scanf("%d", &acctNum);
                c = findClientByAcctNum(acctNum, f);
                printClientTxt(c, stdout);
                break;
            case 4:
                printf("Enter acctNum:");
                scanf("%d", &acctNum);
                c = findClientByAcctNum(acctNum, f);
                printClientTxt(c, stdout);

                double newBalance;
                printf("Enter new balance: ");
                scanf("%lf", &newBalance);
                c.balance = newBalance;
                add_client(&c, f);
                break;

            case 5:
                printf("Enter acctNum:");
                scanf("%d", &acctNum);
                deleteClient(acctNum, f);
                break;
        }

    }

    fclose(f);
    return 0;
}
