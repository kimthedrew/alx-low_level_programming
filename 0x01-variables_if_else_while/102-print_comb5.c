#include <stdio.h>
/**
 *main -Entry key
 *
 *Return: Always 0(success)
 */
int main(void)
{
int a, b;
for (a = 0; a < 100; a++)
{
for (b = a + 1; b < 100; b++)
{
putchar((a / 10) + '0');
putchar((a % 10) + '0');
putchar(' ');
putchar((b / 10) + '0');
putchar((b % 10) + '0');
{
if (a < 98 || b < 99)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}
