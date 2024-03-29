#include <stdio.h>
#include <stdlib.h>

int mul_2_val(int n) {
    return 2 * n;
}

void mul_2_ref(int *n_ptr) {
    *n_ptr = *n_ptr * 2;
}

void m_func(const int *ptr) {

}

void print_arr(int n, int *arr) {
    /*for(int i=0;i<n;i++)
            printf("%d ", *(arr+i));*/
    /*for(int i=0;i<n;i++)
        printf("%d ", *(arr+i));*/

    for(int *it=arr;it!=arr+n;it++)
        printf("%d ", *it);
}

int main()
{
    int arr[10];

    printf("sizeof(arr) = %d\n", sizeof(arr));

    for(int i=0;i<10;i++)
        arr[i] = i * (i+1);

    int *const arr_ptr = arr;
    printf("sizeof(arr_ptr) = %d\n", sizeof(arr_ptr));
    print_arr(10, arr);
    printf("\n");

    printf("arr = %p\n", arr);
    printf("&arr = %p\n", &arr);
    printf("&arr[0] = %p\n", &arr);
    printf("*arr = %d\n", *arr);


/*
    int x = 5;
    const int c_x = 5;

    const int *x_ptr = &x;
    //*x_ptr = 7;   //ne moze jer je pokazivac na konst promje..
    x_ptr = &c_x; //ispravna naredba

    int *const x_ptr_1 = &x;
    *x_ptr_1 = 7; //ispravna naredba
    //x_ptr_1 = &c_x; //ne moze jer je konst pokazivac

    const int *const x_ptr_2 = &x;
    //*x_ptr_2 = 9; //ne moze jer je pokazivac na konst promje..
    //x_ptr_2 = &c_x; //ne moze jer je konst pokazivac
*/


    /*
    int y = 200;
    int *y_ptr;
    y_ptr = &y;

    printf("y_ptr = %p\n", y_ptr);
    printf("*y_ptr = %d\n", *y_ptr);
    printf("*&y_ptr = %p\n", *&y_ptr);
    printf("&*y_ptr = %p\n", &*y_ptr);
    printf("&y = %p\n", &y);

    *y_ptr = 25;
    printf("y = %d\n", y);

    y = mul_2_val(y);
    printf("y = %d\n", y);

    mul_2_ref(&y);
    printf("y = %d\n", y);
    */

    return 0;
}
