/* This program prints a progress bar given as input the size of the progress bar and its completion until the current moment. */
#include <stdio.h>

int main(void) {
    int progress_bar_size;
    float progress_bar_fraction;

    printf("Enter the progress bar max size: ");
    scanf(" %d", &progress_bar_size);

    printf("Enter the progress bar current fraction: ");
    scanf(" %f", &progress_bar_fraction);


    /* Here I am defining an array of chars to contain the progress bar.
    The size of this array must be the `progress_bar_size` plus 3.
    The "plus 3" is because we need to include 3 extra chars besides the chars
    that forms the progress bar itself. These chars are:
        '<': to indicate the start of the progress bar
        '>': to indicate the end of the progress bar
        '\0' (null terminator): to indicate the end of the string */
    char progress_bar[progress_bar_size + 3];

    progress_bar[0] = '<';  // assigning '<' to the first element of the `progress_bar` string
    progress_bar[progress_bar_size + 1] = '>';  // assigning '>' to the last element of the `progress_bar` string
    progress_bar[progress_bar_size + 2] = '\0';  // indicating the end of the string

    /* Initializing a variable to hold the number of '#' that we must use,
    that is, a variable to indicate (with integers) how much the progress bar is filled */
    int filled;

    /* Multiplying the `progress_bar_size` by the `progress_bar_fraction`
    returns the number of elements ('#') that should be filled in the progress bar.
    Depending on the value of `progress_bar_fraction`, this may return a float, so I am casting to int
    with (int) to get only the integer part of the number (I am not rounding). */
    filled = (int) progress_bar_size * progress_bar_fraction;

    /* In this first loop I am iterating through the `progress_bar` string until it reaches
    the `filled` number. It starts on 1 because the position 0 is already occupied by the '<' char. */
    for (int i = 1; i <= filled; i++) {
        progress_bar[i] = '#';
    }

    /* In this second loop I am iterating through the `progress_bar` string again, but this time
    starting from the first element after the `filled` number until the `progress_bar_size` number, that is,
    I am inserting '-' on the elements of the progress bar that were not filled by '#' because the progress
    did not reached these points. */
    for (int i = filled + 1; i <= progress_bar_size; i++) {
        progress_bar[i] = '-';
    }

    printf("%s\n", progress_bar);


    return 0;
}
