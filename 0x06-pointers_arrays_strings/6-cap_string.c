#include "main.h"
/**
*
*
*
**/

char *cap_string(char *str)
{

int i;

i = 0;
while (str[i] != '\0')
{
if ((str[i] >= 4 && str[i] < 48) || (str[i] > 57 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] < 127))
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
i++;
}
return(str);
}
