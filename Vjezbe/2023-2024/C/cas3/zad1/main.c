#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int prost(int);

int A() {
    return 0;
}

int B() {
    A();
}

int C() {
    B();
}


int main()
{
    char c; //8 bintni cio broj
    short s; //16 bita
    int n; //32 bit cio broj u drugom komplementu //%d
    long m; //64 bit cio broj u drugom komplementu //%ld
    float r; //32 floating point //%f
    double g; //64 bitni floating point //%lf

    C();
    //scanf("%d", &n);
    //printf("%d", abs(n));
    /*
    if(prost(n))
        printf("Broj je prost");
    else
        printf("Broj nije prost");*/

    return 0;
}

int prost(int a) {
    for(int n=2;n<=sqrt(a);n++)
        if(a % n == 0)
            return 0;

    return 1;
}
