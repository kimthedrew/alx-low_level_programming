#include "main.h"

/**
 * print_square - prints square followed by a new line
 *  @n: number of _ to be printed
 *  Return: 0
 */
void print_square(int n)
{
int c = 0, d;
while (c < n && n > 0)
{
d = 0;
while (d < n)
{
_putchar('#');
d++;
}
_putchar('\n');
c++;
}
if (c == 0)
_putchar('\n');
}
