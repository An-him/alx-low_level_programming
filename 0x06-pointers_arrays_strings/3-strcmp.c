#include "main.h"
/**
*
*
*
*
**/
int _strcmp(char *s1, char *s2)
{
int lengthfors1, lengthfors2, strcmp;
while (s1[lengthfors1] != '\0' && s2[lengthfors2] != '\0')
{
lengthfors1++;
lengthfors2++;
}
if (lengthfors1 == lengthfors2)
{
strcmp = 0;
return (strcmp);
}
else if (lengthfors1 > lengthfors2)
{
strcmp--;
return (strcmp);
}
else
{
strcmp++;
return (strcmp);
}
return (strcmp);
}
