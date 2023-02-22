#include <stdio.h>
#include <unistd.h>

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
putchar('_');
putchar('p');
putchar('u');
putchar('t');
putchar('c');
putchar('h');
putchar('a');
putchar('r');
putchar('\n');
return (0);
}
