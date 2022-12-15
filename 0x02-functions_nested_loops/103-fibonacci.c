#include <stdio.h>
/**
 *  main - main block
 *  Description: compute and print the of all the multiples of 13 or
 *  5 below 1024 (excluded), followed by a new line   
 *  Return: 0
 */
int main(void)
{
	int a = 0, b = 1, next  = 0;
	int sum = 0;

	while (next < 400000)
	{
		next = a + b;						a = b;
		b = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%i\n", sum);
			return (0);
}


