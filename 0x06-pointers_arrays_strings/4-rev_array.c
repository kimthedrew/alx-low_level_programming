#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers.
 * @n: the number of elements to swap.
 */
void reverse_array(int *a, int n)
{
int i, h, temp;
for (i = 0, h = n - 1; i < h; i++, h--)
{
temp = a[i];
a[i] = a[h];
a[h] = temp;
}
}
