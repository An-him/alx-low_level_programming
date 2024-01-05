#include "main.h"
/**
*_strncpy - function that copies two strings
*@dest: pointer to destination
*@src: source to destination
*@n: bytes from src
*Return: pointer to char
**/
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
for (; i < n; i++)
	dest[i] = '\0';
return (dest);
}
