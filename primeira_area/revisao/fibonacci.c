#include <stdio.h>

unsigned long int nth_fibonacci_value(int n)
{
    unsigned long int result = 0;
    unsigned long int penultimate = 1, antepenultimate = 0;

    if (n <= 1)
    {
        return n;
    }

    for (int i = 2; i <= n; i++)
    {
        result = antepenultimate + penultimate;
        antepenultimate = penultimate;
        penultimate = result;
    }

    return result;
}

int main(void)
{
    int input;

    printf("Type a number greater than or equal zero: ");
    scanf("%d", &input);

    printf("\nThe Fibonnaci sequence for N = %d is:\n", input);
    for (int i = 0; i < input; i++)
    {
        printf("N = %d: %lu\n", i, nth_fibonacci_value(i));
    }
    return 0;
}
