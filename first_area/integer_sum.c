#include <stdio.h>
#include <string.h>  // importing to use strtok
#include <stdlib.h>  // importing to use atoi

#define STRING_DELIMITER " "  // used to split strings in tokens

int sum_array(int *array) {
    int result;

    result = 0;

    for (int i = 0; i <= sizeof(array); i++) {
        result = result + array[i];
    }

    return result;
}

int* parse_user_input_to_array(char *input) {
    char *tokens;
    int integer, index;
    static int array_of_integers[sizeof(input) - (sizeof(input) / 2)];
    /* The input has numbers separated by a single space, therefore, if the input has
       N numbers, there are N - 1 blank spaces between them. I am allocating only the
       number of numbers for the length of the array.
    */

    index = 0;

    tokens = strtok(input, STRING_DELIMITER);

    while (tokens != NULL) {
        integer = atoi(tokens);
        array_of_integers[index] = integer;
        ++index;

        tokens = strtok(NULL, STRING_DELIMITER);
    }

    return array_of_integers;
}

int main() {
    int result, *numbers;
    char numbers_input[100];

    printf("Type integers separated by a single space to know their sum: ");

    fgets(numbers_input, sizeof(numbers_input), stdin);

    numbers = parse_user_input_to_array(numbers_input);
    result = sum_array(numbers);

    printf("The result is %d\n", result);

    return 0;
}
