#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_alphabet -prints alphabet in lowercase
 *
 *Return: Always 0(success)
 */

void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
putchar('\n');
return (0);
}
