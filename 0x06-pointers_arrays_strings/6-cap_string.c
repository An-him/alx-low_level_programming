#include "main.h"
/**
*cap_string - captalizes words in string
*@str: string
*Return: char
**/
char *cap_string(char *str)
{

int i;
int capialize = 1;
i = 0;
while (str[i] != '\0')
{
if (str[i] == '\t' || str[i] == '\n' ||
str[i] == '.' || str[i] == ',' ||
str[i] == '!' || str[i] == ';' ||
str[i] == '(' || str[i] == ')' ||
str[i] == '{' || str[i] == '}' ||
str[i] == '"' || str[i] == '?' ||
str[i] == ' ')
{
capialize = 1;
}
else if (capialize && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
capialize = 0;
}
else
{
capialize = 0;
}
i++;
}
return (str);
}
