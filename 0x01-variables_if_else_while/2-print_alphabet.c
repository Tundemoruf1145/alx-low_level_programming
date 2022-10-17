#include <stdio.h>

/**
 * Main: program that print alphabet
 *
 * Description: write program that print lowercase
 * Return: Alaways 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	putchar('\n');

	return (0);

}
