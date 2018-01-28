#include <stdio.h>

int main(void)
{
	int n = 'a';

	while (n <= 'z')
	{
		if (n == 'e' || n == 'q')
		{
			n++;
		}
	    	else
		{
			putchar(n);
			n++;
		}
	}
	putchar ('\n');
	return (0);
}
