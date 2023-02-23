#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

#ifdef _PUTCHAR_H
#define _PUTCHAR_H

/**
 *_putchar - writes character to the standard output
 *@c: character to be written
 *
 *Return: on success 1 otherwise -1
 */
int _putchar(char c);

#endif /* _PUTCHAR_H */

int _putchar(char c)
{
return (write(1, &c, 1));
}


/**
 *main - prints "_putchar", followed by a new line
 *
 *Return: Always 0(success)
 */

int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');

return (0);
}
