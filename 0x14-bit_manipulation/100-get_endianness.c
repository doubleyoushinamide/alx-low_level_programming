#include "main.h"

/**
 * get_endianness - This function checks the endianness
 *
 * Return: returns : 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
