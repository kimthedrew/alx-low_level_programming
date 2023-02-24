#include <stdlib.h>
#include <stdio.h>
/**
 *main - lists all natural numbers under 1024
 * that are multiples of 3 and 5
 *Return: Always 0(success)
 */
int main(void)
{
int c, sum = 0;
for (c = 0; c < 1024; c++)
{
if ((c % 3) == 0 || (c % 5) == 0)
sum += c;
}
putchar("%d\n", sum);
return (0);
}
