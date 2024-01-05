#include "main.h"
/**
*string_toupper - function converts strings to upper
*@str: string in question
*Return: altered string
**/
char *string_toupper(char *str)
{
int i;
while (str[i] != '\0')
{
if (str[i] <= 122 && str[i] >= 97)
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
