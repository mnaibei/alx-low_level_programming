#include <stdio.h>
/**
 *main - print values on each new line
 *@argc: argument count
 *@argv: array of pointer to argc
 *Return: 0
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
