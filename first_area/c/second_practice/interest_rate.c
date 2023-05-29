/* This program calculates the total number of months that a person
will have to wait for its initial capital to reach a certain amount with
a certain interest rate.

The inputs are the initial capital, the total amount and the interest rate.
*/

#include <stdio.h>
#include <math.h> // for log10f and ceilf

int main()
{
    float capital, interest_rate, total_amount;
    int number_of_months;

    printf("Enter intial capital: ");
    scanf("%f", &capital);

    /* If the user inputs an invalid capital, such as 0, then the program
    will keep asking for the user to enter a valid input. */
    while (capital <= 0) {
        printf("Initial capital must be greater than 0.\n");
        printf("Enter intial capital: ");
        scanf(" %f", &capital);
    }

    printf("Enter interest rate: ");
    scanf(" %f", &interest_rate);

    /* If the user inputs an invalid interest rate, such as -4 or 102, then the program
    will keep asking for the user to enter a valid input. */
    while (interest_rate > 100 || interest_rate < 0) {
        printf("Interest rate must be greater than or equal to 0 and less than or equal to 100.\n");
        printf("Enter interest rate: ");
        scanf(" %f", &interest_rate);
    }

    printf("Enter total amount: ");
    scanf(" %f", &total_amount);

    /* If the user inputs an total amount, such as a total amount
    smaller than the initial capital, then the program will keep asking
    for the user to enter a valid input. */
    while (total_amount < capital) {
        printf("Total amount must be greater than or equal to initial capital.\n");
        printf("Enter total amount: ");
        scanf(" %f", &total_amount);
    }

    number_of_months = ceilf(log10f(total_amount / capital) / log10f(1 + interest_rate / 100));

    printf("Number of months necessary to reach total amount is: %d\n", number_of_months);

    return 0;
}