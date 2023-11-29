#include <stdio.h>
#include <string.h>

int main() {
    // Input string
    char s[100];

    // Get input from the user
    printf("Enter a string: ");
    scanf("%s", s);

    // Length of the string
    int len = strlen(s);

    // Sort the string in ascending order using bubble sort
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (s[j] > s[j + 1]) {
                // Swap characters if they are out of order
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Find the starting index of repeated characters
    int startingIndex = -1;
    for (int i = 0; i < len - 1; i++) {
        if (s[i] == s[i + 1]) {
            startingIndex = i;
            break;
        }
    }

    // Print the sorted string
    printf("Sorted String: %s\n", s);

    // Print the starting index of repeated characters
    if (startingIndex != -1) {
        printf("Starting Index of Repeated Character: %d\n", startingIndex);
    } else {
        printf("No repeated characters found.\n");
    }

    return 0;
}

