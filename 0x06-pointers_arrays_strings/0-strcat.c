#include main.h

/**
 * *_strcat - concatenates *src to *dest
 *@dest: the destination string to be concatenated from
 *@src: the source string to append to @dest
 *Return: pointer to to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char *p = dest;
while (*p != '\0')
{
p++
}
while (*src != '\0')
{
*p = *src;
p++;
src++;
}
*p = '\0';
return (dest);
}
