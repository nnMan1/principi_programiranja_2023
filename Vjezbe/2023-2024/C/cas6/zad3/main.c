#include <stdio.h>
#include <stdlib.h>

void mul_2(int *x_ptr) {
    *x_ptr = 2 * *x_ptr;
}

int mul_2_val(int x) {
    return x * 2;
}

int main()
{
    int a = 5;
    int y = 9;

    printf("%d", a);

    int *const a_ptr= &a;
    const int *y_ptr = &y;
    const int *const a_ptr_c = &a;

    //a_ptr = &y; //ne moze jer je a_ptr konstantan pokazivac
    *a_ptr = 13;

    //*y_ptr = 9; //ne moze jer je y_ptr pokazivac na const vrijednost
    y_ptr = &a; //mogu da promijenim na sta pokazivac ukazuje

    //a_ptr_c = &y;
    //*a_ptr_c = y;
    return 0;

    int x = 7;
    x = mul_2_val(x);

    int *x_ptr = NULL;

    x_ptr = &x;

    mul_2(&x);
    printf("%d", x);

    /*printf("x_ptr = %p\n", x_ptr);
    printf("*x_ptr = %d\n", *x_ptr);

    *x_ptr = 53;
    printf("x = %d\n", x);
    printf("x_ptr = %p\n", x_ptr);
    printf("&x = %p", &x);*/

    return 0;
}
