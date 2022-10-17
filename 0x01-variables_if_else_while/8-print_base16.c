#include <stdio.h>

/**
 * main -program that prints all the numbers of base 16 in lowercase
 *
 * description: prints all the numbers of base 16
 * return: always 0 success.
 */
int main(void)
{
	int n;
	char c;

	for (n = '0'; n <= '9'; n++)
	putchar(n);

	for (c = 'a'; c <= 'f'; c++)
	putchar(c);

	putchar('\n');

	return (0);
}
