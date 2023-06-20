#include <stdio.h>

/**
 * main - Finds and prints the sum of even-valued Fibonacci terms.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next, sum = 2;

	while (fib2 <= 4000000)
	{
		next = fib1 + fib2;

		if (next % 2 == 0)
			sum += next;

		fib1 = fib2;
		fib2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}
