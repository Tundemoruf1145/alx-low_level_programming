#include <stdio.h>
#include <unistd.h>

/**
 **main-program entry point
 *
 **description: 'to display a string using write mode'
 **returns: 1 on success
 **/

int main(void)

{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

