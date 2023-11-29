#include <stdio.h>

int main() {
    int arr[] = {9, 10, -9, 23, 67, -90};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Bubble sort in descending order
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    printf("Output: [");
    for (int i = 0; i < length; i++) {
        printf("%d", arr[i]);

        if (i < length - 1) {
            printf(",");
        }
    }
    printf("]\n");

    return 0;
}
