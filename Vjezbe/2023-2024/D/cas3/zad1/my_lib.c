int prost(int n) {
    for(int i=2;i*i<=n;i++)
        if(n % i == 0)
            return 0;

    return 1;
}


float stepen(float a, int b) {
    float p = 1;

    for(int i=0;i<b;i++)
        p *= a;

    return p;
}
