#include <stdio.h>
/**
* print_name - function that prints a name
*@name: name to print
*@f: function to print name
*Return: Nothing
*/
void print_name(char *name, void (*f)(char *))
{
	void (*ptofunct)(char *);

	if (name == NULL || f == NULL)
		return;

	ptofunct = f;
	ptofunct(name);
}
