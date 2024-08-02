#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Return:  (Success)
 */

int main(void)
{
	unsigned long int idx;
	unsigned long int prev = 1;
	unsigned long int curr = 2;
	unsigned long int limit = 1000000000;
	unsigned long int prev1;
	unsigned long int prev2;
	unsigned long int curr1;
	unsigned long int curr2;

	printf("%lu", prev);

	for (idx = 1; idx < 91; idx++)
	{
		printf(", %lu", curr);
		curr += prev;
		prev = curr - prev;
	}

	prev1 = (prev / limit);
	prev2 = (prev % limit);
	curr1 = (curr / limit);
	curr2 = (curr % limit);

	for (idx = 92; idx < 99; ++idx)
	{
		printf(", %lu", curr1 + (curr2 / limit));
		printf("%lu", curr2 % limit);
		curr1 = curr1 + prev1;
		prev1 = curr1 - prev1;
		curr2 = curr2 + prev2;
		prev2 = curr2 - prev2;
	}
	printf("\n");
	return (0);
}

