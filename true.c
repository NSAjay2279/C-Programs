#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main() {
    string s = get_string("Enter a string: ");

    // Initialize word count to 1 because the first word doesn't have a preceding space
    int wordCount = 1;

    // Iterate through the characters in the string
    for (int i = 0; i < strlen(s); i++) {
        // Check for space character to identify word boundaries
        if (s[i] == ' ') {
            // Increment word count when a space is encountered
            wordCount++;
        }
    }

    printf("Number of words: %i\n", wordCount);

    return 0;
}
