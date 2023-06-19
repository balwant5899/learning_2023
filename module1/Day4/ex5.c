#include <stdio.h>
#include <stdlib.h>

int Diff_even_odd_indexed(int *arr, int size) {
    int even_sum = 0, odd_sum = 0;
    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            even_sum += *(arr + i);
        } else {
            odd_sum += *(arr + i);
        }
    }
    return abs(even_sum - odd_sum);  // Calculate absolute value of the difference
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter elements in the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nDifference between the sum of even-indexed and odd-indexed elements: %d",
           Diff_even_odd_indexed(arr, size));

    return 0;
}
