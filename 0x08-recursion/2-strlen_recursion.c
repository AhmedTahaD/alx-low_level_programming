#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be measured.
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int str_len;

	str_len = 0;
	if (*s)
	{
		str_len++;
		str_len += _strlen_recursion(s + 1);
	}
	return (str_len);
}
