#include "main.h"

/**
 * print_binary - this proto converts the 'decimal' to binary
 * @n: a given decimal value
 */
void print_binary(unsigned long int n)
{
	int tmp;
	static int cnt;

	if (n == 0 && cnt > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	tmp = (n & 1);
	cnt++;
	print_binary(n >>= 1);
	_putchar('0' + tmp);
}
