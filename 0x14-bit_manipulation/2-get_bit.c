#include "main.h"

/**
 * get_bit - returns bits value at a given index
 * @num: contains the bits
 * @index: the array index where bits is located
 *
 * Return: returns integer 'bits'
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bits;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bits = (num >> index) & 1;

	return (bits);
}
