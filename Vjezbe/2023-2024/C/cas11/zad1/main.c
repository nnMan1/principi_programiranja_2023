#include <stdio.h>
#include <stdlib.h>
#include "client_lib.h"


int main()
{
    FILE *clients = fopen("clients.dat", "rb+");

    int command;

    while(1) {
        printf("Enter command: \n %s \n %s \n %s \n %s \n",
                "0 - exit",
                "1 - print all clients",
                "2 - delete client",
                "3 - add client"
                );

        scanf("%d", &command);

        if(command == 0)
            break;

        int id;

        clientData c;

        switch(command) {
            case 1:
                print_all_clients_to_txt(stdout, clients);
                break;
            case 2:
                printf("Enter client id: ");
                scanf("%d", &id);

                c = get_client_by_id(id, clients);
                delete_client(c, clients);
                break;

            case 3:
                c = read_client_from_txt_file(stdin);
                add_client_to_database(c, clients);
        }
    }

    return 0;
}
