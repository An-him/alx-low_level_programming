#include "main.h"
/**
*_strcat - function that concatenates two strings
*@dest: pointer to destination
*@src: source to destination
*Return: pointer to char
**/
char *_strcat(char *dest, char *src)
{
int dest_len = strlen(dest), i;
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
