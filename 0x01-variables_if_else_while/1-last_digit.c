#include <time.h>
#include <stdio.h>
/**
 *main - Entry point of programming
 *
 *Description: assigns a random numbers to variable n each time it is executed
 *
 *Return: Always 0(success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int a = n % 10;

	if (a > 5)
	{
	printf("Last digit of n is %d and is greater than five\n", a);
	}
	else if (a == 0)
	{
	printf("Last digit of n is %d and is 0\n", a);
	}
	else
	{
	printf("Last digit if n is %d and is less than 6 and not 0\n", a);
	}
	/* your code goes there */
	return (0);
}
