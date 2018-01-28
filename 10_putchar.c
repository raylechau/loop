#include <stdio.h>
/**
 * demonstrat  printing with putchar
 *
 */

void print(long n)
{

	/* if number is smaller than 0, put a - sing and change to positive */
	if (n < 0)
	{
		putchar ('-');

		/* change to positive */
		n = -n;
	}

	/* if number is 0 */
	if (n == 0)
		putchar ('0');

	/* Remove the last digit and recur */
	if (n/10)
		putchar (n/10);

	/* Print the last digit */
	putchar (n % 10 + '0');
}

/* Driver program to test above function */
int main()
{
	long int n = 0;
	print (n);
	return (0);
}
