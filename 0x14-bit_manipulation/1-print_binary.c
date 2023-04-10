#include "main.h"

/**
 * print_binary - converts the decimal format number into binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	int temorp;
	static int x_count;

	if (n == 0 && x_count > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	temorp = (n & 1);
	x_count++;
	print_binary(n >>= 1);
	_putchar('0' + temorp);
}
