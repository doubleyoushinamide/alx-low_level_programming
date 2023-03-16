#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked: allocate memory
 * @b: number of bytes
 * Exit: returns in case of an error
 * Return: pointer string
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit (98);

	return (str);
}
