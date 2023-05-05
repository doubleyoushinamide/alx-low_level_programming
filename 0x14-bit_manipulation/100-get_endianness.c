#include "main.h"

/**
 * get_endianness - checks the endianness to output
 *
 * Return: 0 if results to a  big endian, and returns 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
