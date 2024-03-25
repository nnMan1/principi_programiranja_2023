#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void print_array(const int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

void fill_rand(int arr[], int n, int min, int max) {
    for(int i=0;i<n;i++)
        arr[i] = min + rand() % (max - min);
}

void sort(int arr[], int n) {
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i] > arr[j]) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
}

int max_freq_elem(int arr[], int n) {

    int max_freq = 1;
    int max_element = arr[0];

    int curr_freq = 1;
    int curr_elem = arr[0];

    for(int i=1;i<n;i++) {
        if(arr[i] != curr_elem) {
            curr_freq = 0;
            curr_elem = arr[i];
        }

        curr_freq ++;

        if(curr_freq > max_freq) {
            max_freq = curr_freq;
            max_element = curr_elem;
        }
    }

    return max_element;

}

float mean(const int arr[], int n) {
    float s = 0;

    for(int i=0;i<n;i++)
        s += arr[i];

    return s / n;
}

void add_2_int(int x) {
    x += 2;
}

void add_2(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i] += 2;
}
/*
int[] niz(int n) {

}
*/

int main()
{
    srand(time(NULL));

    int n = 10;
    int arr[n];
    fill_rand(arr, n, 1, 10);
    print_array(arr, n);
    printf("\n");

    sort(arr, n);
    print_array(arr, n);
    printf("\n");

    printf("%d\n", arr[0]);
    printf("%d\n", arr[n-1]);
    printf("%f\n", mean(arr, n));
    printf("%d\n", max_freq_elem(arr, n));

    /*char ime[7] = {'M', 'a', 'r', 'k', 'o', '\0'};

    scanf("%s", ime);
    printf("%s", ime);

    return 0;*/

    /*int n = 5;
    int brr[n];

    for(int i = 0;i<n;i++)
        brr[i] = i*i;

    print_array(brr, n);
    printf("\n");

    /*for(int i=0;i<n;i++)
        add_2_int(brr[i]);*/

    /*add_2(brr, n);
    print_array(brr, n);*/

    return 0;
}
