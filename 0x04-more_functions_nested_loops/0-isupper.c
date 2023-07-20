#include <stdio.h>
#include "main.h"
/**
*isupper.c checks if the letter is uppercase or not 
*Author: Ahmed Taha
*Return:1 if upper 0 if not
*/

int _isupper(int c)
{
	if (c >= 'A' && c<= 'Z')
	{
		return (1);
	} else 
		return (0);
}
