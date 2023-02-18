/**
 *main -Entry key to the program
 *
 *Return: Always 0(0)
 */
int main(void)
{
char a;
char b;

for (a = '0'; a <= '9'; a++)
{
putchar(a);
}
for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
