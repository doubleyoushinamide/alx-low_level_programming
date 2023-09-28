#include "main.h"

/**
 * clear_bit - setting the opposite of the mask, mk
 * @num: number to set
 * @index: mk location
 * Return: returns an integer - 1 on success and -1 on fail
 */
int clear_bit(unsigned long int *num, unsigned int index)
{
	unsigned long int mk = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	mk <<= index;
	*num &= ~mk;

	return (1);
}
