/* This programs calculates the sum of all even numbers between two numbers provided by the user. */
#include <stdio.h>


int main(void) {
    int first_num, second_num;
    int max, min, result;

    printf("Type a number: ");
    scanf(" %d", &first_num);

    printf("Type another number: ");
    scanf(" %d", &second_num);

    /* This if..else block checks which number is greater than the other and assign the greatest to
    the `max` variable and the smallest to the `min` variable.
    This is being done so that the code readability improves. */
    if (first_num >= second_num) {
        max = first_num;
        min = second_num;
    } else {
        max = second_num;
        min = first_num;
    }

    result = 0;  // I am going to use this variable as an accumulator, so first I must set it to zero.

    /* Here I am checking if the smallest number is even, if it is not, then I add 1 to it so it is even. 
    Since we want to know the sum of even numbers, I want to start the loop with an even number as well,
    because this way I can increment in 2 for each loop. */
    if ((min % 2) != 0) {
        ++min;
    }

    /* Iterating from the smallest even number until the greatest number (provided by the user).
    At each iteration the `result` variable will have its current value added to the next even
    number throughout the whole iteration. At the end of the loop, the `result` variable will hold
    the answer. */
    for (int i = min; i <= max; i += 2) {
        result += i;
    }

    printf("The sum of all even numbers between these two numbers is %d\n", result);

    return 0;
}
