#include "main.h"
/**
*_strchr -  function a character in a string
*@s: string in question
*@c: character being sought
*Return:pointer
*
**/
char *_strchr(char *s, char c)
{
char *p;
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
p = &s[i];
break;
}
else
p = NULL;
}
return (p);
}
