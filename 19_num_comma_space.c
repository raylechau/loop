#include <stdio.h>

int main(void)
{
	int n;
	for(n = '0'; n <= '9'; n++)
	{
		if(n == '9')
		{
			putchar(n);
			n++;
		}
		else
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
