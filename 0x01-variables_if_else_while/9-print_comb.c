#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(i);
	return (0);
}