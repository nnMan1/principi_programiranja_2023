#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    scanf("%c", &n);

    switch(n) {
        case 'A':
        case 'a':
            printf("%d\n", 10);
            break;
        case 'B':
        case 'b':
            printf("%d\n", 9);
            break;
        case 'C':
        case 'c':
            printf("%d\n", 8);
            break;
        case 'D':
        case 'd':
            printf("7");
            break;
        case 'E':
        case 'e':
            printf("6");
            break;
        case 'F':
        case 'f':
            printf("5");
    }

    return 0;
}
