#include "main.h"

unsigned int get_length(unsigned long int num);
/**
 * flip_bits -  returns the number of bits to be flipped in 'n' to give 'm'
 * @n: first number provided
 * @m: second number provided
 * Return: number of bits to be flipped in both numbers to make them equal
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ix, countx, length1x, length2x, total_lengthx;
	int bit1x, bit2x;

	length1x = get_length(n);
	length2x = get_length(m);
	total_lengthx = (length1x > length2x) ? length1x : length2x;

	countx = 0;
	for (ix = 0; ix < total_lengthx; ix++)
	{
		bit1x = n & 1;
		bit2x = m & 1;
		if (bit1x != bit2x)
			countx++;
		n >>= 1;
		m >>= 1;
	}
	return (countx);
}

/**
 * get_length - returns the number of bits in a number
 * @num: number to consider
 *
 * Return: length of number
 */
unsigned int get_length(unsigned long int num)
{
	unsigned int countx;

	if (num == 0)
		return (1);
	for (countx = 0; num != 0; countx++)
		num >>= 1;
	return (countx);
}
