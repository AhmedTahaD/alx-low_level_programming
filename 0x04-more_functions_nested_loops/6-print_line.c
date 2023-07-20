#include "main.h"
/**
 * print_line - function print -
 * n times
 * @n: number of times the character
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
