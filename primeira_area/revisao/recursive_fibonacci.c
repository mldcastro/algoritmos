#include <stdio.h>

unsigned long int nth_fibonacci_value(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return nth_fibonacci_value(n - 1) + nth_fibonacci_value(n - 2);
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
