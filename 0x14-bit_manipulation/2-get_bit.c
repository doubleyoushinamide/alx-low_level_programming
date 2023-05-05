#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @num: number which contains the bit
 * @index: index at which bit must be found
 *
 * Return: bits (Success) or -1 (error)
 */
int get_bit(unsigned long int num, unsigned int index)
{
	int bits;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bits = (num >> index) & 1;

	return (bits);
}
