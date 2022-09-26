#include "main.h"
/**
 *
 * _isupper - check if is uppper
 *
 *  Return: 0
 */
int _isupper(int c)
{
	if (c>=65 && c<=90)
	{
		_putchar(c);
		_putchar(:);
		_putchar(' ');
		_putchar(1);
	}
	else
	{
		_putchar(c);
		_putchar(:);
		_putchar(' ');
		_putchar(0);
	}
	return(0);
}
