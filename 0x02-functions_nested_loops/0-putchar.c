#include <stdio.h>
#include "main.h"

/**
 *_putchar - writes character to the standard output
 *@c: character to be written
 *
 *Return: on success 1 otherwise -1
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
 *main - entry key to the program
 *
 *Return: Always 0(success)
 */
int main(void)
{
/* Call _putchar to print characters of the strint "_putchar" */
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
/* Call _putchar to print new line character */
_putchar('\n');
return (0);
}
