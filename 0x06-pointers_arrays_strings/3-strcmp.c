#include "main.h"
/**
*_strcmp - function compares two strings.
*@s1: string 1
*@s2: string 2
*Return: int
**/
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[1])
{
return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
i++;
}
return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
