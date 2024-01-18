#include "main.h"
/**
*_strdup - pointer to mem with string duplicated
*@str: size of bytes to allocate
*Return: pointer to allocated memory
**/
char *_strdup(char *str)
{
char *strc = NULL;
int Strslength, i;
if (str == NULL)
{
return (NULL);
}
Strslength = strlen(str);
strc = malloc(Strslength + 1 * sizeof(char));
if (strc == NULL)
{
return (NULL);
}
for (i = 0; i < Strslength; i++)
{
str[i] = strc[i];
}
return (strc);
}
