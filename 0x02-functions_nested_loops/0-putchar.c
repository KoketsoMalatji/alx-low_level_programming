#include "putchar.h"
/**
 *main - entry point.
 *Description: program starts and ends here.
 *Return: 0 on success.
 */
int main(void)
{
char text[9] = "Putchar";
int i;
for (i = 0; i < 9; i++)
{
_putchar(text[i]);
}
_putchar('\n');
return (0);
}
