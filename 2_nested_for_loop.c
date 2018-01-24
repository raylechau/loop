#include <stdio.h>
/**
 *a simple script demonstrating nested while loops
 *A for loop can contain any kind of statement in its body.
 *The inner loop must have a different name for its loop counter.
 *This will prevent conflict with outer loop's counter.
 */

int main(void)
{
	/* Declared counter variables for loops */
	int outer, inner;

	/* start counter for outer loop */
	outer = 1;

	/* Outer loop begins here */
	for (outer = 1; outer <= 3; outer++)
	{
		/* body of outer loop */

		/* start counter for inner loop */
		inner = 1;

		/* inner loop begins here */
		for (inner = 1; inner <= 2; inner++)
		{
			/* body of inner loop */
			printf("six\n");
		}
	}
	printf("\n");
}

/*output:
 *six
 *six
 *six
 *six
 *six
 *six
 */
