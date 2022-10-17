#include <stdio.h>

/**
 * main - program that prints all possible single-digit number.
 *
 * description: print single number.
 *
 * return: always 0 success.
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
