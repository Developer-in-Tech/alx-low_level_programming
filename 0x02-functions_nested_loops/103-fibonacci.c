#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int sum = 0;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}


		int c = a + b;

		a = b;
		b = c;
	}

	printf("%d\n", sum);
	return (0);
}
