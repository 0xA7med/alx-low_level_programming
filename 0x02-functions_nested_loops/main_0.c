#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    else
        return (0);
}

/**
 * test_islower - tests the _islower function
 */
void test_islower(void)
{
    int r;
    int n;

    n = 'H';
    r = _islower(n);
    _putchar(r + '0');

    n = 'o';
    r = _islower(n);
    _putchar(r + '0');

    n = 108; /* ASCII value of 'l' */
    r = _islower(n);
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
