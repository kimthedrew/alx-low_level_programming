#include <stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 -prints alphabets in lowercase 10 time followed,
 *by a new line
 */

void print_alphabet_x10(void)
{
char ch;
int b;
b = 0;
while (b < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
putchar('\n');
b++;
}
}
