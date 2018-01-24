#include <stdio.h>
/**
 *All statements in the outer loop's body are executed 5 times
 *The inner loop runs 10 times for each of those 5 times,
 *for a total of 50 numbers printed
 *
 */

int main(void)
{
	/* declared and initiated counter */
	int i = 1;
	int o = 1;

	/* outer loop start here */
	for (o = 1; o <=  5; o++)
	{
		/* body of loop outer */

		/* inner loop begins here */
		for (i = 1; i <= 10; i++)
		{
			printf("ray");
		}
	}
}
