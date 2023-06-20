#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_arrays - Adds two arrays of digits and stores the result in the third array.
 *
 * @a: First array of digits
 * @b: Second array of digits
 * @result: Array to store the sum
 * @size: Size of the arrays
 */
void add_arrays(int *a, int *b, int *result, int size)
{
	int carry = 0;

	for (int i = size - 1; i >= 0; i--)
	{
		int sum = a[i] + b[i] + carry;
		result[i] = sum % 10;
		carry = sum / 10;
	}
}

/**
 * print_array - Prints the elements of an array.
 *
 * @array: Array to print
 * @size: Size of the array
 */
void print_array(int *array, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d", array[i]);
}

/**
 * main - Prints the first 98 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	const int size = 100;
	int fib1[size], fib2[size], next[size];

	memset(fib1, 0, sizeof(fib1));
	memset(fib2, 0, sizeof(fib2));
	memset(next, 0, sizeof(next));

	fib2[size - 1] = 1;

	printf("1, 2");

	for (int count = 3; count <= 98; count++)
	{
		add_arrays(fib1, fib2, next, size);
		memcpy(fib1, fib2, sizeof(fib2));
		memcpy(fib2, next, sizeof(next));

		printf(", ");
		print_array(next, size);
	}

	printf("\n");

	return (0);
}
