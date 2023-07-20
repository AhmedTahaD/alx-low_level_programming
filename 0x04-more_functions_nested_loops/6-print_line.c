#include "main.h"
/**
 * print_line - function print -
 * n times
 * @n: number of times the character
 */

void print_line(int n)
{
	int print_num;

	for (print_num = 0; print_num < n; print_num++)
	{
		_putchar('-');
	}
	_putchar('\n');
}
