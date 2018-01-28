#include <stdio.h>

int main(void)
{
	char l;

	for(l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
}
