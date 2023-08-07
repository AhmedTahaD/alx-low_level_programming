#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, r;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
        i = r = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[r] != '\0')
		r++;
	concat_str = malloc(sizeof(char) * (i + r + 1));
	if (concat_str == NULL)
		return (NULL);
	i = r = 0;
	while (s1[i] != '\0')
	{
		concat_str[i] = s1[i];
		i++;
	}
	while (s2[r] != '\0')
	{
		concat_str[i] = s2[r];
		i++, r++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
