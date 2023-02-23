#include "main.h"

/**
 *jack_bauer -prints every minute of the day of Jack
 *starting from 00:00 to 23:59
 */

void jack_bauer(void);
{
int a = 0, b;
while (a < 24)
{
b = 0;
while (b < 60)
{
putchar(a / 10 + '0');
putchar(a % 10 + '0');
putchar(':');
putchar(b / 10 + '0');
putchar(b % 10 + '0');
putchar('\n');
b++;
}
a++
}
}
