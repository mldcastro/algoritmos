/* This program reverses the digits of an integer.*/

#include <stdio.h>
#include <math.h>  // for pow

int number_of_digits(int number) {
    /* Divide number by 10 successively until it reaches to 0
    and counts how much divisions were necessary to it. */

    int count;

    count = 0;

    do {
        number /= 10;
        ++count;
    } while (number != 0);
    
    return count;
}

int reverse(int number) {
    /* Reverse the digits of an integer.
    
    This function iterates over the number of digits of the input (number arg). At each
    iteration, the last digit is collected and multiplied by a power of 10 such that this
    digit is placed in the reverse postion of its initial position. After this multiplication, the
    original number input is replaced with its division by 10, and the loop restarts.
    
    Ex.:
    number = 12
    result = 0

    First loop:
        last digit = number % 10 = 12 % 10 = 2
        result = result + last_digit * 10^(NUMBER_LENGTH - i) = 0 + 2 * 10^(2 - 1) = 20
        number = number / 10 = 12 / 10 = 1
    Second loop:
        last_digit = number % 10 = 1 % 10 = 1
        result = result + last_digit * 10^(NUMBER_LENGTH - i) = 20 + 1 * 10^(2 - 2) = 21
        number = number / 10 = 1 / 10 = 0
    */

    int last_digit, result;
    const int NUMBER_LENGTH = number_of_digits(number);

    result = 0;

    for (int i = 1; i <= NUMBER_LENGTH; i++) {
        last_digit = number % 10;
        result += last_digit * pow(10, NUMBER_LENGTH - i);
        number /= 10;
    }

    return result;
}

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    printf("%d reversed is %d\n", number, reverse(number));

    return 0;
}
