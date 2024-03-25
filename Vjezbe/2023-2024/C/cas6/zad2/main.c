#include <stdio.h>
#include <stdlib.h>

void print_matr(int n, int m, int matr[n][m]){
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%d ", matr[i][j]);

        printf("\n");
    }
}

int main()
{
    int matr[5][6];

    for(int i=0;i<5;i++)
        for(int j=0;j<6;j++)
            matr[i][j] = i * j;

    print_matr(5, 6, matr);
    return 0;
}
