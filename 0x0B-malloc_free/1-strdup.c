#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char
 * Return:returns 0
 */
char *_strdup(char *str)
{
	char *str_ptr;
        int i, r;

	i=0;
	r=0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	str_ptr = malloc(sizeof(char) * (i + 1));
	if (str_ptr == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		str_ptr[r] = str[r];
	return (str_ptr);
}
