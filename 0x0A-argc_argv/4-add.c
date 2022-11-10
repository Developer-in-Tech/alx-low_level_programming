#include <stdio.h>
#include "main.h"

/**
 * main - main funct
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
