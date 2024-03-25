#include <stdio.h>

void print(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

int lin_search(int a[], int n, int key) {
    for(int i=0;i<n;i++)
        if(a[i] == key)
            return i;

    return -1;
}

int bin_search(int a[], int n, int key) {
    int l = 0, r = n;

    while(r - l > 0) {
        int med = (r + l) / 2;

        if(a[med] == key)
            return med;

        if(a[med] < key) l = med + 1;
        if(a[med] > key) r = med;
    }

    return -1;
}

void sort(int a[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++)
            if(a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
    }
}
