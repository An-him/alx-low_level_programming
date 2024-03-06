#include "main.h"
/**
*_strcmp - function compares two strings.
*@s1: string 1
*@s2: string 2
*Return: int
**/
int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int nl;

	nl = 0;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; ++i, ++j)
	{
		if (s1[i] == s2[j])
		{
			nl = 0;
		}
		else if (s1[i] < s2[j])
		{
			nl = s1[i] - s2[j];
		}
		else
			nl = s1[i] - s2[j];
	}
	return (nl);
}
