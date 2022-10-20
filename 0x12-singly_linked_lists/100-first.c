#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - ...
 *
 * Return: Nothing.
 */
void first(void)
{
	prinf("You're beat! and yet, you must allow,\n");
	prinft("I bore my house upon my back!\n");
}
