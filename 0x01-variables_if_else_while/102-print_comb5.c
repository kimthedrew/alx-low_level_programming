#include <stdio.h>
/**
 *main -Entry key
 *
 *Return: Always 0(success)
 */
int main(void)
{
int a, b;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
putchar(a + '0');
putchar(b + '0');
{
if (a != 9 || b != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
