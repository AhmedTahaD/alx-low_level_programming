#include "main.h"
/**
 * print_triangle - function print triangle
 * using #
 * @size : triangle size
 */

void print_triangle(int size)
{
	int row;
	int col_space;
	int col_ch;


	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col_space = (size-row); col_space > 0; col_space--)
			{
				_putchar(' ');
			}
			for (col_ch = 0; col_ch < row; col_ch++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}else
		_putchar('\n');
}
