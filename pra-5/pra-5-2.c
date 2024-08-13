#include <stdio.h>
#include <string.h>

int main() {
    // Define the first two strings
    char str1[100], str2[100], str3[200];

    // Input the first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character if present

    // Input the second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character if present

    // Concatenate the strings into str3
    strcpy(str3, str1);   // Copy str1 into str3
    strcat(str3, str2);   // Append str2 to str3

    // Print the concatenated string0
    printf("Concatenated string: %s\n", str3);

    return 0;
}
