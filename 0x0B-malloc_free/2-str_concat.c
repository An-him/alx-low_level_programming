#include "main.h"
/**
*str_concat - function concats string
*@s1: string1
*@s2: string2
*Return: pointer to allocated memory
**/
char *str_concat(char *s1, char *s2)
{
int Lengthofs1;
int Lengthofs2;
int Index;
int Indexer;

char *str = NULL;

if (s1 == NULL || s2 == NULL)
{
return (NULL);
}
Lengthofs1 = strlen(s1), Lengthofs2 = strlen(s2);
str = malloc((Lengthofs1 + Lengthofs2 + 3) * sizeof(char));

if (str == NULL)
{
return (NULL);
}
for (Index = 0; s1[Index] != '\0'; Index++)
{
str[Index] = s1[Index];
};

for (Indexer = 0; s2[Indexer] != '\0'; Indexer++)
{
str[Index + Indexer] = s2[Indexer];
};
str[Index + Indexer] = '\0';
return (str);
}
