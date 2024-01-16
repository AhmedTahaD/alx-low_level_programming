#include "main.h"
/**
 * _isdigit - function check if the iput is digit
 * @c: parameter
 * Return: 1 if digit 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
