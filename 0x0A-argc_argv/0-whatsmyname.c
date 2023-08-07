#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: A list containing the arguments passed to the program.
 * Return: 0 if the program executes successfully.
 */
int main(int argc, char const *argv[])
{
    (void)argc;
    printf("%s\n", argv[0]);
    return 0;
}


