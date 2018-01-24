#include <stdio.h>
/**
 *nested loop can print number pattern
 *
 */

int main(void)
{
	/* declared and initialized counter */
	int outer = 1;
	int inner;

	/* outer loop controls repetition of inner loop */
	/* outer loop start here */
	while (outer <= 5)
	{
		/* start counter for inner loop */
		inner = 1;

		/* inner loop start here */
		while (inner <= outer)
		{
			printf("%d", inner);

			/* initiate incrementation for inner */
			inner++;
		}

		printf("\n");
		outer++;
	}

	return (0);
}

/*output:
/*1
/*12
/*123
/*1234
/*12345
