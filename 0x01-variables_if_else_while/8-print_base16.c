#include <stdio.h>
/**
 * main - print all the number of base 16 in lower case
 *
 * Description: using the main function
 * this program prints all the number of base 16 in lower case
 * Return: 0
 */
int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
	putchar(c);
}
for (c = 'a'; c <= 'f'; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
