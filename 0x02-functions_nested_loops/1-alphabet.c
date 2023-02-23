#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void print_alphabet(void);
/**
 *main -Entry key
 *
 *Return: Always 0(success)
 */
int main(void)
{
print_alphabet();
return (0);
}

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
}
