#include <stdio.h>
#include "main.h"

/**
 *islower - checks for lowercase characters
 *@c -character to be checked
 *Return: if lowercase 1 otherwise 0
 */

int _islower(int c)
{
char c;
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
