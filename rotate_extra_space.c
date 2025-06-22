#include <stdio.h>

void rotate_extra_space(int arr[], int n, int k) {
    int result[n];
    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }
   
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}
