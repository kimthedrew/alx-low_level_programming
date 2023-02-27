#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 with exception of 2 and 4
 *
 * Return: The numbers 0 to 9
 */
void print_most_numbers(void)
{
int a = 0;
for (a <= 9; a++)
{
if (a == 2 || a == 4)
{
continue;
}
{
_putchar(a + '0');
}
}
putchar('\n');
}
