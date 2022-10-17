#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base.
 *
 * description: prints all single digit numbers of base 10 starting from 0
 * return: always 0 success.
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
	putchar(n);
	}

	putchar('\n');

	return (0);
}
