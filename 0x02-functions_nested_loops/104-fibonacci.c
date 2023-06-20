#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long long fib1 = 1, fib2 = 2, fib_next;
    unsigned long long count;

    printf("%llu, %llu", fib1, fib2);

    for (count = 3; count <= 98; count++)
    {
        fib_next = fib1 + fib2;
        printf(", %llu", fib_next);

        fib1 = fib2;
        fib2 = fib_next;
    }

    printf("\n");

    return 0;
}
