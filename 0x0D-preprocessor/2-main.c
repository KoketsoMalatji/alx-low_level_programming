#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif
/**
* main - print the name of the file
*Return: 0 (success)
*/
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
