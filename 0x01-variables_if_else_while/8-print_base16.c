#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char hex_digits[] = "0123456789abcdef";

	for (num = 0; num < 16; num++)
		putchar(hex_digits[num]);

	putchar('\n');

	return (0);
}
