//Nick Voss
// IT383
// 9/1/2022
//
// Write a program that prompts the user for the name of a file.
// Then create the file and count the number of words and lines
// in the file and print out the counts. Use functions

// Must use strtok() - Breaks string into series of tokens using a delimiter
// Returns a pointer to the first token found in the string. Null pointer is
// returned if no tokens are left to retrieve.

// char *strtok(char *string, const char *delim)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Count the number of words in a given line
int words(char *sentence) {
    int count = 0;
    char *token;

    token = strtok(sentence, " \t\n");
    while (token != NULL) {
        token = strtok(NULL, " \t\n");
        count++;
    }
    return count;
}

// argc = argument count. argv = argument vector (pointer to beginning of
// C-string. argv[0] is always the name of the program, aka ./program).
int main(void) {
    printf("Enter the name of the file you'd like to open: ");
    char fileName[20];
    scanf("%s", fileName);

    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("File not found, program terminating.");
        exit(EXIT_FAILURE);
    }

    int lineCount = 0;
    int wordCount = 0;
    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        wordCount += words(line);
        lineCount++;
    }

    printf("Lines: %d\n", lineCount);
    printf("Words: %d\n", wordCount);
    fclose(file);
    return 0;
}

