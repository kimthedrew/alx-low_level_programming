#include "main.h"

/**
 * *_strncpy - copies an inputted number
 * of strings from src to dest.
 *@dest: the buffer storing the string copy.
 *@src: the source string.
 *@n: maximum number of bytes to be copied from src.
 *
 *Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (*src != '\0' && i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
while (i < n)
{
*dest = '\0';
dest++;
i++;
}
return (dest - i);
}
