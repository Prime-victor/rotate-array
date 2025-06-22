#include <stdio.h>

void rotate_extra_space(int arr[], int n, int k);
void rotate_in_place(int arr[], int n, int k);

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int k = 3;

    rotate_extra_space(arr1, n, k);
    printf("Rotate using extra space: ");
    print_array(arr1, n);

    rotate_in_place(arr2, n, k);
    printf("Rotate in place: ");
    print_array(arr2, n);

    return 0;
}
