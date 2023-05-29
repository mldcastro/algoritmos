/* This program asks what operation the user wants to perform between
two real numbers. Once the operation and the numbers are informed, the program
performs the operation and returns the result. */

#include <stdio.h>

int main()
{
    char operation;
    float first_value, second_value;

    printf("Enter operation (+, -, * or /): ");
    scanf("%c", &operation);

    printf("Enter first value: ");
    scanf("%f", &first_value);

    printf("Enter second value: ");
    scanf("%f", &second_value);

    switch (operation) {
        case '+':
            printf("%f + %f = %.4f\n", first_value, second_value, first_value + second_value);
            break;
        case '-':
            printf("%f - %f = %.4f\n", first_value, second_value, first_value - second_value);
            break;
        case '*':
            printf("%f * %f = %.4f\n", first_value, second_value, first_value * second_value);
            break;
        case '/':
            // We need to check for the value of the denominator (second_value) to
            // avoid division by zero.
            if (second_value == 0) {
                printf("Cannot divide by zero\n");
            }
            else {

                printf("%f / %f = %.4f\n", first_value, second_value, first_value / second_value);
                break;
            }
    }

    return 0;
}
