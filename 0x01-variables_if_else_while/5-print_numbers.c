#include <stdio.h>
/**
 *main -Entry key to the program
 *
 *Description: prints digits of base 10
 *
 *Return: Always 0(success)
 */
int main(void)
{
int a = 0;
while (a < 10)
{
printf("%d", a);
a = a + 1;
}
printf("0\n");
return (0);
}
