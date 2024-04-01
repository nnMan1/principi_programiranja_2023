#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void print_arr(int n, int *arr) {
    for(int *it=arr; it < arr + n; it++)
        printf("%d ", *it);
}

void print_arr_rec(int n, int *arr) {
    if(n == 0)
        return;

    printf("%d ", *arr);
    print_arr_rec(n-1, arr+1);
}

int max_arr_rec(int n, int *arr) {
    if(n == 0)
        return INT_MIN;

    int tmp = max_arr_rec(n-1, arr+1);
    return tmp < *arr ? *arr : tmp;
}

int max_arr_rec2(int n, int *arr) {
    if(n == 0)
        return INT_MIN;

    int tmp = max_arr_rec(n-1, arr);
    return tmp < *(arr + n - 1) ? *(arr + n - 1) : tmp;
}

void print_matr(int n, int m, int **matr) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++)
            printf("%d ", matr[i][j]);

        printf("\n");
    }
}

int compare_dec(int a, int b) {
    return a < b;
}

int compare_inc(int a, int b) {
    return a > b;
}

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int n, int *arr, int (*compare)(int, int)) {
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(compare(*(arr+i), *(arr+j)))
                swap(arr+i, arr+j);
}

int* unos(int *n) {
    scanf("%d", n);
    int *arr = malloc(sizeof(int)* *n);

    for(int i=0;i<*n;i++)
        scanf("%d", arr + i);

    return arr;
}

int main()
{
    //int arr[] = {5, 4, 2, 7, 1, 78, 45, 3, 9, 4};
    int n;
    int *arr = unos(&n);

    printf("%d\n", max_arr_rec(n, arr));

    sort(n, arr, compare_dec);

    print_arr(n, arr);
    printf("\n");

    sort(n, arr, compare_inc);

    print_arr_rec(n, arr);
    printf("\n");
/*
    int (*compare)(int, int) = compare_inc;
    printf("%d", compare(5, 6));

/*
    int n = 5, m = 6;
    int **matr = malloc(n*sizeof(int*));
    for(int i=0;i<m;i++)
        matr[i] = malloc(m*sizeof(int));

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            matr[i][j] = i * j;

    print_matr(n, m, matr);
/*
    for(int i=0;i<n;i++) {
        free(matr[i]);
    }/*

    /*free(matr);

    /*int *a_ptr = malloc(5*sizeof(int));

    for(int i=0;i<5;i++)
        a_ptr[i] = i * 2;

    print_arr(5, a_ptr);

    free(a_ptr);
   /* int a[10] = {1, 2, 3, 4, 5};
    //int c[10] = a;
    int *const b = a;

    printf("*a = %d\n", *a);
    printf("a = %p\n", a);
    printf("&a[0] = %p\n", &a[0]);
    printf("&a = %p\n", &a);
    printf("b = %p\n", b);
    printf("&b = %p\n", &b);

    print_arr(10, a);
    /*for(int i=0;i<10;i++)
        printf("%d ", *(b + i));*/
        //printf("%d ", b[i]);*/

    return 0;
}
