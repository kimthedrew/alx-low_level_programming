#include <stdio.h>
/**
 *main -Entry key of the program
 *
 *Description: prints alphabets except e and q
 *
 *Return: Always 0(success)
 */
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
}

putchar('\n');
return (0);
}
