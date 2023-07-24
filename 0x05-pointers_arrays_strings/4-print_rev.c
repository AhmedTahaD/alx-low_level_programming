#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int str_len = 0;
	int reverse;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	s--;
	for (reverse = str_len; reverse > 0; reverse--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
