#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**

*main- Generates random numbers,declare + OR -

* Return:1, if successful

*/

int main(void)

{
	int n;
	/*code generate random number*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
	printf("%d is positive\n",n);
	}

	if (n == 0)
	{
	printf("%d is zero\n",n);
	}

	if (n < 0)
	{
	printf("%d is negative",n);
	}

	return (0);
}
