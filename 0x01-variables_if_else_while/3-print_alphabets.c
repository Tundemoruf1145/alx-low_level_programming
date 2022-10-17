#include <stdio.h>

/**
 * Man- print lower and upper alphabet
 *
 * Description: write a script for the printout
 * Return: Always 0 success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
	putchar(c);

	putchar('\n');

	return (0);
}
