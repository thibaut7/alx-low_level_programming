#include <stdio.h>
#include "main.h"
/**
 * _isupper - check if is uppper
 *@c: The character to be checked.
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
