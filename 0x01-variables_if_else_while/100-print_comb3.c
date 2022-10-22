#include <stdio.h>

/**
 * main - program that prints all possible different of two digits.
 *
 * description: prints all possible two digit.
 * 
 * return: always 0 success.
 */
int main(void)
{
	int n;

	for (n = '01'; n <= '99'; n++)
	{
		putchar(n);
		if (n != '99')
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');

	return (0);
}
