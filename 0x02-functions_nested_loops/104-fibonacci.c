#include <stdio.h>
#include <gmp.h>

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
    mpz_t fib1, fib2, fib_next;
    unsigned long count;

    mpz_init(fib1);
    mpz_init_set_ui(fib2, 1);
    mpz_init_set_ui(fib_next, 2);

    printf("%lu, %lu", mpz_get_ui(fib2), mpz_get_ui(fib_next));

    for (count = 3; count <= 98; count++)
    {
        mpz_add(fib_next, fib1, fib2);
        gmp_printf(", %Zd", fib_next);

        mpz_set(fib1, fib2);
        mpz_set(fib2, fib_next);
    }

    printf("\n");

    mpz_clear(fib1);
    mpz_clear(fib2);
    mpz_clear(fib_next);

    return 0;
}
