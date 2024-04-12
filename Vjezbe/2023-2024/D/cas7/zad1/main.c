#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* read_arr(int *n) {
    scanf("%d", n);

    int *arr = malloc(*n * sizeof(int));

    for(int i=0;i<*n;i++)
        scanf("%d", arr + i);

    return arr;
}

void print_arr(int *arr, int n) {
    /*for(int i=0;i<n;i++)
        printf("%d ", *(arr + i));
        //*(arr + i)
        //arr[i]*/

    for(int *it = arr; it != arr + n; it++)
        printf("%d ", *it);
}

void print_arr_rec(int *arr, int n) {
    if(n == 0)
        return;

    printf("%d ", *arr);
    print_arr_rec(++arr, --n);
}

int compare_dec(int x, int y) {
    return x < y;
}

int compare_inc(int x, int y) {
    return x > y;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int *arr, int n, int (*compare)(int, int)) {
    for(int *it=arr; it < arr+n; it++)
        for(int *jt=it+1; jt < arr+n; jt++)
            if(compare(*it, *jt))
                swap(it, jt);
}

void print_matr(int **matr, int n, int m) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%9d ", matr[i][j]);

        printf("\n");
    }
}

int skal_proizvod(int *a, int *b, int n) {
    if(n == 0)
        return 0;

    //return skal_proizvod(a, b, n-1) + a[n-1] * b[n-1];
    return skal_proizvod(a+1, b+1, n-1) + a[0] * b[0];
}

int main()
{
    char *f_names[4] = {"sin", "cos", "tan", "atan"};
    int (*f[4])(int) = {sin, cos, tan, atan};

    char name[10];
    scanf("%s", name);

    for(int i=0;i<4;i++) {

        if(strcmp(name, f_names[i]) == 0)
            printf("%d %f", i, f[i](0));

    }
/*
    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};

    printf("%d", skal_proizvod(a, b, 3));
    */

/*
    int n = 5, m = 6;

    int** matr = malloc(sizeof(int*) * n);

    for(int i=0;i<n;i++)
        matr[i] = malloc(sizeof(int) * m);

    matr[2][3] = 7;
    print_matr(matr, n, m);

    for(int i=0;i<n;i++)
        free(matr[i]);

    free(matr);*/

    /*int (*compare)(int, int);
    compare = compare_dec;

    printf("%d ", compare(5, 7));*/
/*
    int n;
    int *arr = read_arr(&n);

    sort(arr, n, compare_inc);

    print_arr_rec(arr, n);

    free(arr);


    /*
    int *const arr_ptr = arr;

    printf("\n");
    printf("arr = %p\n", arr);
    printf("&arr = %p\n", &arr);
    printf("&arr[0] = %p\n", &arr[0]);
    printf("arr_ptr = %p\n", arr_ptr);
    printf("&arr_ptr = %p\n", &arr_ptr);

    print_arr(arr, n);*/

    return 0;
}
