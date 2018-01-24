#include <stdio.h>
/**
 *nested for lool - just two level deep.
 *
 */

int main(void)
{
	/* declared counter for loops */
	int row, col;

	/* outer loop starts here */
	for (row = 1; row <= 3; row++)
	{
		/* loop body of outer */

		/* inner loop starts here */
		for (col = 1; col <= row; col++)
		{
			/* loop body of inner */
			printf ("%d", row);
		}

		printf("\n");
	}
}

/*outer loop initiates row = 1, transfer control to row <= 3
 conditions not yet reach, transfer control to loop body
 loop body transfer control to inner loop
 inner loop initiates col = 1, transfer control to condition
 conditon col <= row test and transfer control to inner loop
 inner loop perform whatever is in there
 inner loop transfer control to outer loop incerment coutner
 increment counter increments then transfer control to 
 outer loop condition..*/
/*output:
1
22
333 
*/
