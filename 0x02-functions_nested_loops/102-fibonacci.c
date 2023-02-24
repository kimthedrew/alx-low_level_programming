#include <stdio.h>
/**
 *main -prints the first fifty fibonacci numbers
 *
 *Return: Always 0(success)
 */
int main(void)
{
int b;
unsigned long d = 0, e = 1, f;
for (b = 0; b < 50; b++)
{
f = d + e;
printf("%lu", f);

d = e;
f = e;

if (b == 49)
printf("\n");
else
printf(",");
}
return (0);
}
