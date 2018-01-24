#include <stdio.h>
#include <stdlib.h>
/*
 * for loop - 2 level deep
 *
 */

int main(void)
{
	/* declare counters for loops */
	int i, o, mark;

	/* outer loop start here */
	for (o = 1; o<= 3; o++)
	{
		/* outer loop body */

		/* inner loop start here */
		for (i = 1; i <= 2; i++)
		{
			printf("\n Enter mark for subject %d of student %d:", o, i);
			scanf("%d", &mark);
		}
	}
}
