#include <stdio.h>
#include "main.h"

/**
 * main - Fizz Buzz code
 *
 * Return: void
 */
int main(void)
{
int a = 1;
while (a <= 100)
{
if (a % 3 == 0)
{
printf("fizz");
}
else if (a % 5 == 0)
{
printf("buzz");
}
else if (a % 3 && a % 5 == 0)
{
printf("fizbuzz");
}
else
{
printf("%d", a);
}
if (a != 100)
{
putchar(' ');
}
 a++;
}
putchar('\n');
return (0);
}
