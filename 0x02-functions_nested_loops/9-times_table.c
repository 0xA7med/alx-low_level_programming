#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* Print the first digit */
		_putchar(','); /* Print the comma */
		_putchar(' '); /* Print the space */

		for (column = 1; column <= 9; column++)
		{
			product = row * column;

			if (product <= 9)
			{
				_putchar(' '); /* Print an extra space for alignment */
				_putchar('0' + product);
			}
			else
			{
				_putchar('0' + (product / 10));
				_putchar('0' + (product % 10));
			}

			if (column < 9)
			{
				_putchar(','); /* Print the comma */
				_putchar(' '); /* Print the space */
			}
		}

		_putchar('\n'); /* Move to the next line */
	}
}
