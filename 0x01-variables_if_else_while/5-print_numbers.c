#include <stdio.h>

/**
 * main -program that prints all single digit numbers.
 *
 * description: print single digit.
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
