#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If s1 < s2, the negative difference of the
 * first unmatched characters.
 * if s1 == s2, 0.
 * if s1 > s2, the positive difference of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (s1[i] - s2[i]);
}
