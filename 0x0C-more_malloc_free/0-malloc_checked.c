#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: the memory to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocate;

	allocate = malloc(b);

	if (allocate == NULL)
	{
		exit(98);
	}
	return (allocate);
}
