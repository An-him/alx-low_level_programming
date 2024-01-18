#include "main.h"
/**
*_strdup - pointer to mem with string duplicated
*@str: size of bytes to allocate
*Return: pointer to allocated memory
**/
char *_strdup(char *str)
{
int i, j;
char *strc = NULL;
if (str == NULL)
{
return (NULL);
}
j = strlen(str);
strc = malloc((j + 1) * sizeof(char));
if (strc == NULL)
{
return (NULL);
}
for (i = 0; i <= j; i++)
{
strc[i] = str[i];
}
return (strc);
}
