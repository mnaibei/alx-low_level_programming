#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		x = tolower(x);
		int lower_x = tolower(x);
		putchar(lower_x);
	}
	return (0);
}
