#include "holberton.h"

/**
 * main - print sign of a number.
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(45);
	}
	else
	{
		return (-1);
		_putchar(48);
	}
	_putchar('\n');
}
