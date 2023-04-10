#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number or 0 if there is one or more chars in the
 *         string b that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int dec = 0;

    if (b == NULL)
        return (0);

    while (*b)
    {
        if (*b == '1')
            dec = (dec << 1) | 1;
        else if (*b == '0')
            dec <<= 1;
        else
            return (0);

        b++;
    }

    return (dec);
}

