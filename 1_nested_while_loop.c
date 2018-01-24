#include <stdio.h>
/**
 * example of nested while loop
 *
 */

int main(void)
{
	/* counter variable declarations */
	int outer, inner;

	/* initiate outer loop counter */
	outer = 1;

	/* outer loop terminating condition */
	while (outer <= 3)
	{

	printf("\n-- OUTER LOOP NO. %d", outer);

	/* initiate inner loop couter */
	inner = 1;

	/* innter loop terminating condition */
	while (inner <= 5)
	{
		printf("\n\t-- INNER LOOP NO. %d", inner);

		/* counter incrementation for inner loop */
		inner++;
	}

	/* counter incremenation for outer loop */
	outer++;==
	}

	printf("\n-------------------------raylechau.com\n");
	return (0);
}
