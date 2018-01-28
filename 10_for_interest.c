#include <stdio.h>
/**
 * for loop to calculate interest 3 times
 *
 */

int main(void)
{
	int p, n, count;
	float r, si;

	/* for loop */
	for (count = 1; count <= 3; count++)
	{
		printf("Enter values for p,n, and r: ");
		scanf("%d %d %f", &p, &n, &r);

		si = p * n * r / 100;
		printf("Simple Interest = Rs.%f\n", si);
	}
}
