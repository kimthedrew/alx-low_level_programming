#include <unistd.h>

#ifndef _PUTCHAR_H
#define _PUTCHAR_H

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
#endif /* _PUTCHAR_H */

/**
 *main - entry key to the program
 *
 *Return: Always 0(success)
 */
int main(void)
{
/* Call _putchar to print characters of the strint "_putchar" */
putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('r');
/* Call _putchar to print new line character */
putchar('\n');
return (0);
}
