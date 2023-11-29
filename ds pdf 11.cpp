#include <stdio.h>

int main() {
    // Input array
    int n;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Get array elements from the user
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Rearrange the array to place positive integers at their correct positions
    for (int i = 0; i < n; i++) {
        while (arr[i] > 0 && arr[i] <= n && arr[arr[i] - 1] != arr[i]) {
            // Swap the elements to their correct positions
            int temp = arr[i];
            arr[i] = arr[temp - 1];
            arr[temp - 1] = temp;
        }
    }

    // Find the first position where the element is not in its correct position
    int missing = n + 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            missing = i + 1;
            break;
        }
    }

    // Print the smallest positive number missing
    printf("The smallest positive number missing is: %d\n", missing);

    return 0;
}

