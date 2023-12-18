#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - entry point
*Return: 0
**/
int main(void)
{
	int n = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d ", n);
	if (n > 0)
	{
	printf("is positive\n");
	}
	else if (n < 0)
	{
	printf("is negative\n");
	}
	else if (n == 0)
	{
	printf("is zero\n");
	}
	return (0);
}
