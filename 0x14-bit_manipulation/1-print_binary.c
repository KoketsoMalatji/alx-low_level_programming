#include "main.h"
/**
* print_binary - function that prints the binary representation of a number
*@n: nuber to convert
*Return: Nothing
*/
void print_binary(unsigned long int n)
{
	unsigned long int i, counter = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n == 1)
	{
		_putchar('1');
		return;
	}

	i = 2;

	while (i <= n && counter < 62)
	{
		i <<= 1;
		counter++;
	}

	if (counter != 62)
		i >>= 1;

	while (i != 0)
	{
		if ((i & n) != 0)
		{
			counter++;
			_putchar('1');
		}
		else
		{
			counter++;
			_putchar('0');
		}
		i >>= 1;
	}
}
