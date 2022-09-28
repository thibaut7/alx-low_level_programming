/*
 * File: 1-print_rev_recursion.c
 * Auth: Brennan D Baraban
 */

#include "holberton.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed.
 */
 #include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
void _print_rev_recursion(char *s)
{   int i=0;
	if (*s)
	{    printf("%d", i);
		_print_rev_recursion(s + 1);
		i++;
		_putchar(*s);

	}
}
int main(void)
{
    char t[10]= "thibaut" ;
    _print_rev_recursion(t);
}
