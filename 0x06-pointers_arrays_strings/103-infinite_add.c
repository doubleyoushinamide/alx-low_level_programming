#include "main.h"

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int res[size_r];

    int n1_len = strlen(n1);
    int n2_len = strlen(n2);

    int carry = 0;

    int i, j, k = 0;

   while (i >= 0 || j >= 0 || carry)
   {
        int x = carry;

        if (i >= 0)
        {
            x += n1[i] - '0';
        }
        
        if (j >= 0)
        {
            x += n2[j] - '0';
        }


        res[k++] = (x % 10);
        carry = x / 10;
 
        i --;
        j --;
    }

    reverse(res, k);

    int index = 0;
    while (index < k && index < size_r - 1)
    {
        r[index] = (res[index] + '0');
        index ++;
    }
    r[index] = '\0';
    return r;
}
