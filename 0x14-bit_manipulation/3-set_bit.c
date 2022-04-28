#include "main.h"
/**
* set_bit - Function that sets the value of a bit to 1 at a given position
*@n: number to change
*@index: index starting from 0 of the bit you want to set
*Return: 1 if it worked or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 64)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
