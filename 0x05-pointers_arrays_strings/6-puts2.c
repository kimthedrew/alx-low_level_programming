#include "main.h"

/**
 *puts2 - prints every character of a string
 *starting from the first character
 *@str: the used string reference
 *
 *Return: 0(success)
 */
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
