#include <stdio.h>

int main(void)
{
	char a;
	while (a <= 'z')
	{
		if (!(a == 'e' && a == 'q'))
			putchar (a);
	}
	putchar ('\n');
	return (0);
}
