#include "main.h"
/**
 *print_diagonal - function print \
 *n times
 *@n: times of print
 */
void print_diagonal(int n)
{
	int n_print;
	int space;

	if (n > 0)
	{
		for (n_print = 0; n_print < n; n_print++)
		{
			for (space = 0; space < n_print; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (n_print == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
