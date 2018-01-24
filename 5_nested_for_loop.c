#include <stdio.h>
/**
 *In nested loop, the outer initiate the start of the loop
 *The inner loop is executed first and then the outer
 *
 */

int main(void)
{
	/* declared counter for loops */
	int o, i;

	/* outer loops */
	for (o = 1; o <= 5; o++)
	{
		/* inner loop */
		for (i = 1; i <= 5; i++)
		{
			printf("%d\t", (i*o));
		}

		/* print a new line */
		printf("\n");
	}

	return (0);
}

/* first focus on the inner loop
/* first initiation of i = 1
/* after that, it transfers control to loop condition part: i <= 5
/* i <= 5 checks for conditon, if true transfer control to loop body
/* else, it terminate the inner loop
/* body of inner loop contains statement to printf something
/* after it executes, transfer control to counter
/* counter increment and transfer control to condition again
/* conditon check, if true transfer contro to loop body again
/* each iteration will contunue until condition no longer true
/* when that happen, condition terminate and give control back to 
/* outer loop
/* think like this: outer loop initiates - hands control to innner
/* inner loop will then go thru the entire iterations base on
/* the condition of inner loop
/* then give control back to outer loop
/* outer loop then give control to counter 
*/
