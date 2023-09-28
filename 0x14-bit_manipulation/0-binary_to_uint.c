#include "main.h"

/**
 * binary_to_uint - this function is used to convert binary to decimal
 * @b: a pointer to zeros and ones
 * Return: returns the decimal number or value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
/* binary decimal cnversion using a while loop*/
	while (*b)
	{
		if (*b == '1')
			decimal = (decimal << 1) | 1;
		else if (*b == '0')
			decimal <<= 1;
		else
			return (0);
		b++;
	}

	return (decimal);
}
