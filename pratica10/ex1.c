/* This program takes as input a phrase and removes all its whitespaces, returning the
formatted input and also the whitespace count. */
#include <stdio.h>
#include <string.h> // for strlen

#define MAX_STRING_SIZE 10000

void remove_espaco(char input[], char formatted_input[], int *whitespace_count);

void remove_espaco(char input[], char formatted_input[], int *whitespace_count) {
    /* This function takes an input string (input), removes all whitespace characters
    from it, and stores the resulting string in another character array
    (formatted_input). Additionally, it counts the number of whitespace characters
    removed and updates the value of the whitespace_count with this
    count. */
    for (int i = 0, j = 0; i <= strlen(input); i++) {
        if (input[i] == ' ') {
            (*whitespace_count)++;
        } else {
            /* If the character is not a whitespace we must copy the input character to
            the formatted_input array. After this we must update the formatted_input
            array index (j) */
            formatted_input[j] = input[i];
            j++;
        }
    }
}

int main() {
    char user_input[MAX_STRING_SIZE];
    char formatted_input[MAX_STRING_SIZE];
    int whitespace_count = 0;

    printf("Enter a phrase: ");
    fgets(user_input, MAX_STRING_SIZE, stdin);

    user_input[strlen(user_input) - 1] = '\0';
    printf("The original input is: %s\n", user_input);

    remove_espaco(user_input, formatted_input, &whitespace_count);

    printf("The formatted input is: %s\n", formatted_input);
    printf("The whitespace count is: %d\n", whitespace_count);

    return 0;
}
