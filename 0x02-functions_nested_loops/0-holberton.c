#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char c[] = "Holberton";

	for (i = 0; i <= 9; i++)
	{
		_putchar(i[c]);
	}
	_putchar("\n");
	return (0);
}
