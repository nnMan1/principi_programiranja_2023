#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arr_min(int n, int arr[]) {
    int m = arr[0];

    for(int i=0;i<n;i++)
        if(m > arr[i])
            m = arr[i];

    return m;
}

int print_arr(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

int pow2_int(int x) {
    x *= x;
    return x;
}

void pow2(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i] = pow2_int(arr[i]);
        //ovo mijenja niz zato sto dodjeljujemo
        //vrijednost memorijskim lokacijama koje
        //smo dobili po referenci preko niza

        //pow2_int(arr[i]);
        //ovo ne mijenja niz zato sto
        //pozivamo funkiju sa jednim elementom niza
        //taj element se kopira i kopija se mijenja
}
/*
//ne moze nesto ovako
int[] rand_arr(int n) {

}
*/

int main()
{
    srand(time(NULL));

    int n = rand() % 10 + 10;
    int a[n];

    for(int i=0;i<n;i++)
        a[i] = rand() % 100;

    print_arr(a, n);
    printf("\n");

    pow2(a, n);
    print_arr(a, n);
    printf("\n");

    int m = arr_min(n, a);

    printf("%d", m);

    return 0;
}
