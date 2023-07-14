#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Description: print whether the generated number is -ve, zero, or positive
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ( n > 0 )
	{
		printf("%i is positive\n", n);
	} else if  (n < 0)
	{
		printf("%i is negative\n", n);
	} else
		printf("%i is zero\n", n);
	
	/* end of my code*/
	return (0);
}
