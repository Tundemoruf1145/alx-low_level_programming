#include "main.h"

/**
 * _isdigit - check for characters that are digit.
 * @c : character.
 *
 * return: 1 for a character that will be a digit or 0 for any else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);

}
