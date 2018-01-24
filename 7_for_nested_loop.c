#include <stdio.h>
/**
 *for loop that is nested - 2 levels
 *
 */

int main()
{
	/* declare counter for loop */
	int i, o, j;

	/* outer loop */
	for (o = 0; o < 3; o++)
	{
		/* inner loop */
		for (i = 0; i < 3; i++)
		{
			/* inner loop body */
			printf("%d", i+o);
		}
	}
	printf("\n");
	return (0);
}

/*output:
012123234
