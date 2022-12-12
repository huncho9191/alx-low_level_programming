#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * 
 * main - Enter point 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rsnd() = RAND_MAX /2;
	/* your  code goes there */

	int m;

	m = n % 10;
	if (m > 5 ) 
		printf ("Last digit of %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d and is less than6 and not 0\n", n, m);
	return (0);
}
