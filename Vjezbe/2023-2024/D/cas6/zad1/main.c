#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort(int arr[], int n) {
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
}

int bin_search(int arr[], int n, int x) {
    int l = 0, r = n-1;

    while(l <= r) {
        int med = (l + r) / 2;

        if(arr[med] == x) return med;
        if(arr[med] < x) l = med + 1;
        if(arr[med] > x) r = med - 1;
    }

    return -1;

}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    sort(arr, n);
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    sort(arr, n);

    int k;
    scanf("%d", &k);

    for(int i=0;i<k;i++) {
        int x;
        scanf("%d", &x);

        printf("arr[%d] = %d\n", bin_search(arr, n , x), x);
    }
    return 0;
}
