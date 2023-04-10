#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int value_x;
	char *c;

	value_x = 1;
	c = (char *) &value_x;

	return ((int)*c);
}
