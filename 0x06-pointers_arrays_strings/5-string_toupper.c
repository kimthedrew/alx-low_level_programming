#include "main.h"
#include <ctype.h>

/**
 * *string_toupper - changes all the lowercase
 * of a string to uppercase.
 *
 * @str: the string to be changed.
 *
 * Return: a pointer to the string changed.
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i])
{
str[i] = toupper(str[i]);
i++;
}
return (str);
}
