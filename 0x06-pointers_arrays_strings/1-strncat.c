#include "main.h"
/**
*_strncat - function that concatenates two strings
*@dest: pointer to destination
*@src: source to destination
*@n: bytes from src
*Return: pointer to char
**/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = strlen(dest), i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
