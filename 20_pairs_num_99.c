#include <stdio.h>

int main(void)
{
	int n;

	for  (n = 0; n < 100; n++)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');

		if (n != 99)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
