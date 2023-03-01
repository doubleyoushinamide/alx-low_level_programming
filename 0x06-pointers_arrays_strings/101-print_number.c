#include "main.h"

/**
 * print_number - prints an arbitrary integer using putchar
 *
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int u, i
	_putchar((n/10) % 10 + '0');
	_putchar(n % 10 + '0');
}
