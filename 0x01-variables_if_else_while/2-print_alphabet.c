#include <stdio.h>
/**
 *main -Entry key to the program
 *
 *Description: prints the alphabet in lower case
 *
 *Return: Always 0(success)
 */
int main(void)
{
Char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar (letter);
}
putchar('\n');
return (0);
}
