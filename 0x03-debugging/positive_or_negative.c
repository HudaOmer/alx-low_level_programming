#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * positive_or_negative - function
 * @i: ia an input to the function
 * Description: print whether the generated number is -ve, zero, or positive
 *
 * Return: void
 */

void positive_or_negative(int i)
{
	/* your code goes there */
	if (i > 0)
	{
		printf("%i is positive\n", i);
	} else if  (i < 0)
	{
		printf("%i is negative\n", i);
	} else
		printf("%i is zero\n", i);
	/* end of my code*/
}
