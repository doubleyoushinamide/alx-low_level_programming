#include "main.h"

unsigned int get_length(unsigned long int num);
/**
 * flip_bits -  returns the number of bits to be flipped in 'n' to give 'm'
 * @n: number 1
 * @m: number 2 value int.
 * Return: number of bits to be flipped in both numbers to make them equal
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, cnt, lgth1, lgth2, total_lgth;
	int bit1, bit2;

	lgth1 = get_length(n);
	lgth2 = get_length(m);
	total_lgth = (lgth1 > lgth2) ? lgth1 : lgth2;

	cnt = 0;
	for (i = 0; i < total_lgth; i++)
	{
		bit1 = n & 1;
		bit2 = m & 1;
		if (bit1 != bit2)
			cnt++;
		n >>= 1;
		m >>= 1;
	}
	return (cnt);
}

/**
 * get_length - returns the number of bits in a number
 * @num: number in index
 *
 * Return: returns the lenght of number
 */
unsigned int get_length(unsigned long int num)
{
	unsigned int cnt;

	if (num == 0)
		return (1);
	for (cnt = 0; num != 0; cnt++)
		num >>= 1;
	return (cnt);
}
