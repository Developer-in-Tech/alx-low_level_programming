#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints multiplication of integers
 * @argc: Counts argument
 * @argv: Argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, c;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = a * b;

	printf("%i\n", c);
	return (0);
}
