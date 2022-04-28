#include "main.h"
/**
* get_bit - Function that returns the value of a bit al a given index
*@n: number to check
*@index: is the index, starting from 0 of the bit you want to get
*Return: the value of the bit at index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	n >>= index;
	if ((n & 1) == 1)
		return (1);
	else
		return (0);
}
