#include <stdio.h>
#include <stdib.h>
#include <time.h>

/**
 * main - printf if the number is positive,negative or 0
 * Return: Always  0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_Max / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}
	
	return(0);
}