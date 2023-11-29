#include <stdio.h>
#include <string.h>

int main() {
    int i, j, n;

    // Input the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Create an array of strings
    char arr[n][100];  // Assuming a maximum string length of 100

    // Input the strings
    for (i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    // Sort the array of strings using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    // Display the sorted strings
    printf("\nStrings in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
