#include "main.h"
/**
*_strdup - pointer to mem with string duplicated
*@str: size of bytes to allocate
*Return: pointer to allocated memory
**/
char *_strdup(char *str)
{
int i;
char *strc = NULL;
int j = strlen(str);
strc = (char *)malloc(sizeof(char) * j + 1);
if (strc == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
strc[i] = str[i];
i++;
}
return (strc);
}
