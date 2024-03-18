#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//provjera da li je broj prost

int main()
{
    int n;
    scanf("%d", &n);

    int p = 1;

    for(int i=2;i<=sqrt(n);i++)
        if(n % i == 0) {
            p = 0;
            break;
        }

    /*if(p)
        printf("Broj je prost");
    else
        printf("Broj nije prost");*/

    printf("%s", p ? "Broj je prost" : "Broj nije prost");

    return 0;
}
