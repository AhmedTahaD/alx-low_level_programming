#include "main.h"
/**
 *print_numbers - function print numbers from 0 > 9
 *
 * Return: returns 0
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
