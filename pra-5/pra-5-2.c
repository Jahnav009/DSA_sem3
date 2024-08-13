#include <stdio.h>

void concatenate(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;

    // Copy the first string to the result
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }

    // Copy the second string to the result after the first
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }

    // Null-terminate the resulting string
    result[i] = '\0';
}

int main() {
    char str1[100], str2[100], result[200];

    // Input two strings from the user
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    // Concatenate the strings
    concatenate(str1, str2, result);

    // Output the concatenated string
    printf("The concatenated string is: %s\n", result);

    return 0;
}