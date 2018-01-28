#include <stdio.h>

int main(void)
{
	int n;
	char L;
	for(n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for(L = 'a'; L <= 'f'; L++)
	{
		putchar(L);
	}
	putchar('\n');
}
