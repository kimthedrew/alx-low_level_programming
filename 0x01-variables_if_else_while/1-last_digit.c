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

	printf("Last digit of %d is", n)
	if (a > 5)
	{
	printf("and is greater than five\n");
	}
	else if (a == 0)
	{
	printf("and is 0\n");
	}
	else
	{
	printf("and is less than 6 and not 0\n");
	}
	return (0);
}
