#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>

/**
 * main - print addition of positive numbers
 * @argc: counts argument
 * @argv: Argument
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
