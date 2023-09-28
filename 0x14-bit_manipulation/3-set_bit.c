#include "main.h"

/**
 * set_bit - sets a specific bit at a particular location
 * @num: pointing to the set bits
 * @index: the location of mk
 * Return: returns int- 1 for success and -1 for fail
 */
int set_bit(unsigned long int *num, unsigned int index)
{
	/* First, create a mask, 'mk' to hold bits */
	unsigned long int mk = 1;

	/* return -1 if value is greater than index location */
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	/* shift the mask, by 2 bits left from the expected index*/
	mk <<= index;
	/*either return the new number OR the mask index loc*/
	*num = *num | mk;
	return (1);
}
