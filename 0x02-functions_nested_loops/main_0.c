#include "main.h"

/**
 * test_islower - tests the _islower function
 */
void test_islower(void)
{
    int r;
    int n;

    n = 'H';
    r = my_islower(n);
    _putchar(r + '0');

    n = 'o';
    r = my_islower(n);
    _putchar(r + '0');

    n = 108; /* ASCII value of 'l' */
    r = my_islower(n);
    _putchar(r + '0');

    _putchar('\n');
}

/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
    test_islower();
    return (0);
}
