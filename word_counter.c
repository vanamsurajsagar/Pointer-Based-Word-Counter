#include <stdio.h>
#include <ctype.h>

// Function declaration
int countWords(char *str);

int main() {
    char text[500];

    // 1. Take a full line of text input from the user
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    // 2. Call the function using the string pointer
    int words = countWords(text);

    // 3. Print the result
    printf("Total word count: %d\n", words);

    return 0;
}

// Function to count words using pointers
int countWords(char *str) {
    int count = 0;
    int inWord = 0; // Acts as a boolean flag (0 = false, 1 = true)

    // Loop through the string until reaching the null terminator '\0'
    while (*str != '\0') {
        // Check if the current character is a space, tab, or newline
        if (isspace(*str)) {
            inWord = 0; // We hit a space, so we are no longer inside a word
        } 
        // If it's not a space and we weren't already inside a word
        else if (inWord == 0) {
            inWord = 1; // Mark that we have entered a new word
            count++;    // Increment the word counter
        }

        str++; // Move the pointer to the very next character in memory
    }

    return count;
}
#include <stdio.h>
#include <ctype.h>

// Function declaration
int countWords(char *str);

int main() {
    char text[500];

    // 1. Take a full line of text input from the user
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);

    // 2. Call the function using the string pointer
    int words = countWords(text);

    // 3. Print the result
    printf("Total word count: %d\n", words);

    return 0;
}

// Function to count words using pointers
int countWords(char *str) {
    int count = 0;
    int inWord = 0; // Acts as a boolean flag (0 = false, 1 = true)

    // Loop through the string until reaching the null terminator '\0'
    while (*str != '\0') {
        // Check if the current character is a space, tab, or newline
        if (isspace(*str)) {
            inWord = 0; // We hit a space, so we are no longer inside a word
        } 
        // If it's not a space and we weren't already inside a word
        else if (inWord == 0) {
            inWord = 1; // Mark that we have entered a new word
            count++;    // Increment the word counter
        }

        str++; // Move the pointer to the very next character in memory
    }

    return count;
}
